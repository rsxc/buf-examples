package main

import (
	"fmt"
	"strings"

	"google.golang.org/protobuf/compiler/protogen"
)

func main() {
	protogen.Options{}.Run(func(gen *protogen.Plugin) error {
		for _, f := range gen.Files {
			if !f.Generate {
				continue
			}
			generateFile(gen, f)
		}
		return nil
	})
}

// Write one `.pb.go` function per `.proto` input file
func generateFile(gen *protogen.Plugin, file *protogen.File) {
	filename := file.GeneratedFilenamePrefix + "_boilerplate.pb.go"
	g := gen.NewGeneratedFile(filename, file.GoImportPath)
	printHeader(g, file)

	for _, message := range file.Messages {
		printMessage(g, message)
	}
}

// Add DO NOT EDIT header
func printHeader(g *protogen.GeneratedFile, file *protogen.File) {
	g.P("// Code generated by protoc-gen-go-example. DO NOT EDIT THIS FILE.")
	g.P()
	g.P("package ", file.GoPackageName)
	g.P()
}

// Write each Protobuf message as a Go struct
func printMessage(g *protogen.GeneratedFile, message *protogen.Message) {
	g.P(fmt.Sprintf("type %s struct {", message.Desc.Name()))

	for _, field := range message.Fields {
		printField(g, field)
	}

	g.P("}")
	g.P()
}

// Print name, type, and JSON metadata for each message field
func printField(g *protogen.GeneratedFile, field *protogen.Field) {
	name := field.GoName
	kind := field.Desc.Kind()
	jsonName := strings.ToLower(name)

	g.P(fmt.Sprintf("        %s %s `json:\"%s\"`", name, kind, jsonName))
}
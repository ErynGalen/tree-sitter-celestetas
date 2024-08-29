package tree_sitter_celestetas_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_celestetas "github.com/tree-sitter/tree-sitter-celestetas/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_celestetas.Language())
	if language == nil {
		t.Errorf("Error loading Celestetas grammar")
	}
}

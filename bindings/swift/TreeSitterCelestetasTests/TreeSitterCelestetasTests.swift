import XCTest
import SwiftTreeSitter
import TreeSitterCelestetas

final class TreeSitterCelestetasTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_celestetas())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Celestetas grammar")
    }
}

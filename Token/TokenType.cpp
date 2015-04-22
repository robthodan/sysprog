#include "../includes/Token.h"

enum class TokenType {
	EOF,      		// "end of file"
	ERROR,
	NUMBER,
	IDENTIFIER,
	COMMA,        	// ','
	PLUS,         	// '+'
	MINUS,        	// '-'
	STAR,         	// '*'
	SLASH,        	// '/'
	ANDAND,       	// '&&'
	PIPEPIPE,     	// '||'
	EXCLAMATIONMARK,// '!'
	LBRACE,       	// '('
	RBRACE,       	// ')'
	EQUAL,       	// '='
	EQUALEQUAL,  	// '=='
	EXCLAMATIONMARKEQUAL, // '!='
	LESS,         	// '<'
	LESSEQUAL,    	// '<='
	GREATER,      	// '>'
	GREATEREQUAL, 	// '>='
	LCURLY,       	// '{'
	RCURLY,       	// '}'
	SEMICOLON,    	// ';'
	IF,           	// 'if'
	ELSE,         	// 'else'
	WHILE,        	// 'while'
	INT,          	// 'int'
	BOOLEAN,      	// 'boolean'
	VOID,         	// 'void'
	RETURN,       	// 'return'
};

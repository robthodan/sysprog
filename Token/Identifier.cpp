#include "Token.h"

Identifier::Identifier(char string[], TokenType type) : Token(TokenType::IDENTIFIER) {
	this->string = string;
}

Identifier::~Identifier() {

}


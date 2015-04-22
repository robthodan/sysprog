/*
 * Token.cpp
 *
 *  Created on: 16.04.2015
 *      Author: danielmauch
 */

#include "../includes/Token.h"

Token::Token(TokenType type) {
	this->type = type;
}

Token::~Token() {

}

TokenType Token::getType() {
	return Token::type;
}

void Token::setType(TokenType type) {
	this->type = type;
}

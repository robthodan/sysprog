#include "../includes/Token.h"
#include <stdlib.h>

Number::Number(char string[], TokenType type) : Token(TokenType::NUMBER) {
	this->string = string;
}

Number::~Number() {

}

char getString() {
	return 'a';
}

int getAsInt(){
	return 0;
}

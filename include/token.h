//
// Created by raihan on 2/22/21.
//

#ifndef BASICAL_TOKEN_H
#define BASICAL_TOKEN_H

#include <stddef.h>

typedef enum TokenType {
  /* operators */
  TOKEN_PLUS, TOKEN_MINUS, TOKEN_STAR, TOKEN_SLASH,
  TOKEN_MOD, TOKEN_POW, TOKEN_LEFT_PAREN, TOKEN_RIGHT_PAREN,

 /* literals */
  TOKEN_INT_LITERAL, TOKEN_FLOAT_LITERAL,

  /* special tokens */
  TOKEN_EOF, TOKEN_UNRECOGNISED
} TokenType;

typedef struct Token {
  TokenType _type;
  char *_start;
  size_t _len;
} Token;


#endif //BASICAL_TOKEN_H

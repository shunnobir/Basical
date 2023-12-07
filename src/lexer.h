/*
 * created by: shunnobir
 * date: 30/11/2023
 */

#ifndef __BASICAL_LEXER_H__
#define __BASICAL_LEXER_H__

#include "token.h"

#define LEXER_GROW_FACTOR 2

typedef struct lexer lexer_t;
struct lexer {
    i16_t      size;       // No. of tokens
    i16_t      cap;        // Token Capacity
    i16_t      line;       // Line no.
    i16_t      pos;        // Current position in src
    i16_t      slen;       // Source string length
    char const *src;       // Source string
    char const *fname;     // File name
    token_t    *tokens;    // Array of tokens
};

lexer_t *lexer_new(void);
void    lexer_tokenize_string(lexer_t *lexer, char const *src, char const *fname);
void    lexer_tokenize_file(lexer_t *lexer, char const *fname);
token_t lexer_get_token(lexer_t const *lexer, i16_t index);
void    lexer_print_tokens(lexer_t *lexer);
void    lexer_delete(lexer_t *lexer);

#endif // __BASICAL_LEXER_H__
//
// Created by raihan on 2/22/21.
//

#ifndef BASICAL_SCANNER_H
#define BASICAL_SCANNER_H

#include "token.h"
#include <stdbool.h>

typedef struct Scanner {
  char const *_source;
  char *_start;
  char *_current;
  ptrdiff_t _len;
} Scanner;

extern bool floatPresent;

void scanner_init(Scanner *scanner, char *source);
Token next_token(Scanner *scanner);

#endif //BASICAL_SCANNER_H

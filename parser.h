#ifndef PARSER_H
#define PARSER_H

#include "matrix.h"
#include "stack.h"
#include "ml6.h"

#define STEP .1

void parse_file ( char * filename, 
		  struct stack * cstack,
		  struct matrix * edges,
		  screen s);

#endif

#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 2
#define TOP_OF_(cstack) cstack->data[cstack->top]

struct stack {
  int size;
  int top;
  struct matrix **data;
};

struct stack * new_stack();
void push( struct stack *s );
void pop(struct stack *s);

void free_stack( struct stack *);
void print_stack( struct stack *);

#endif

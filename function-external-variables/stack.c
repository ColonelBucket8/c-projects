#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXOP 100
#define MAXVAL 100
#define BUFFSIZE 100
#define NUMBER '0'

int getop(char[]);

void push(double f);
double pop();
void view_head();
void duplicate();
void swap();
void clear();

int main() {
  return 0;
}

int sp = 0;
double stack[MAXVAL];

void push(double f) {
  if (sp < MAXVAL) {
    stack[sp++] = f;
  } else {
    printf("Error: stack full.\n");
  }
}

double pop() {
  if (sp > 0) {
    return stack[--sp];
  } else {
    printf("Error: stack empty.\n");
  }

  return 0.0;
}

void view_head() {
  if (sp) {
    printf("stack_head: %g\n", stack[sp - 1]);
  } else {
    printf("Error: stack empty.\n");
  }
}

void duplicate() {
  double temp = pop();
  push(temp);
  push(temp);
}

void clear() {
  do {
    stack[sp] = 0.0;
  } while (sp--);
}

int bufp = 0;
char buf[BUFFSIZE];

int getch() {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
  if (bufp >= BUFFSIZE) {
    printf("ungetch: too many characters\n");
  } else {
    buf[bufp++] = c;
  }
}


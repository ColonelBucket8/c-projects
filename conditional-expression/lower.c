#include <stdio.h>

char lower(char c);

int main() {
  char a = 'A';

  putchar(a);
  printf("\n");
  putchar(lower(a));
  printf("\n");

  return 0;

}

char lower(char c) {
  return (c >= 'A' && c <= 'Z') ? c += 'a' - 'A' : c;
}

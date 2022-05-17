#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTR 1000

int any(char str1[], char str2[]);

int main() {
  char str1[MAXSTR] = "cxabcabc";
  char str2[MAXSTR] = "cbaa";

  printf("STR1: %s\n", str1);
  printf("STR2: %s\n", str2);
  printf("Index of same letter: %d\n", any(str1, str2));

  return 0;
}

int any(char str1[], char str2[]) {
  int i, j;

  for (i = 0; str1[i] != '\0'; i++) {
    for (j = 0; str2[j] != '\0'; j++) {
      if (str1[i] == str2[j]) {
        return i;
      }
    }
  }
  return -1;
}

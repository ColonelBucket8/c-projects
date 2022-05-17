#include <stdio.h>

#define MAXSTR 1000

void squeeze (char str[], int c);
void squeeze_compare (char str1[], char str2[]);

int main () {

    char str1[MAXSTR] = "abesfasdf";
    char str_to_compare[MAXSTR] = "dabesf";
    char str2[MAXSTR] = "aasrwerasdfasdf";
    int character = 'a';

    printf("Original input: %s\n", str2);
    squeeze(str2, character);
    squeeze_compare(str1, str_to_compare);

    printf("Output of squeeze: %s\n", str2);
    printf("Output of squeeze_to_compare: %s\n", str1);

    return 0;
}

void squeeze (char str[], int c) {
    int i, j;

    for (i = j = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }

        str[j] = '\0';
    }
}

void squeeze_compare (char str1[], char str2[]) {
    int i, j, k;

    for (k = 0; str2[k] != '\0'; k++) {
      for (i = j = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[k]) {
          str1[j++] = str1[i];
        }
      }
      str1[j] = '\0';
    }
}

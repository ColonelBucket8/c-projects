#include <stdio.h>

#define MAXSTR 1000

void squeeze (char str[], int c);
void squeeze_compare (char str1[], char str2[]);

int main () {

    char str1[MAXSTR] = "abesfasdf";
    char str2[MAXSTR] = "aasrwerasdfasdf";
    int character = 'a';

    printf("Original input: %s\n", str2);
    squeeze(str2, character);

    printf("Output: %s\n", str2);

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
}

#include <stdio.h>

/*maximum input line length*/
#define MAXLINE 1000

int fgetline(char line[], int maxline);
void copy(char to[], char from[]);
void reverseInput(char line[]);
int getLengthOfArray(char arr[]);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = fgetline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
        if (max > 0) {
            printf("%s %d", longest, getLengthOfArray(longest));
        }

    }
        return 0;
}

int fgetline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
        if (c == '\n') {
        s[i] = c;
        i++;

        }
        s[i] = '\0';
        return i;
}

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}

void reverseInput(char line[]) {
    int i;
    int size = *(&line + 1) - line;

    for (i = 0; i < size; i++) {
        line[i] = line[size - 1 - i];
    }
}

int getLengthOfArray(char arr[]) {
    return *(&arr + 1) - arr;
}

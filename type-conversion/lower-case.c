#include <stdio.h>

int lowerCase(int c) ;

int main() {
    int c;
    int lowerC;

    while ((c = getchar()) != EOF) {
        lowerC = lowerCase(c);
        putchar(lowerC);
    }
}

int lowerCase(int c) {
    if (c >= 'A' && c <= '2') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

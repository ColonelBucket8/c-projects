#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, i, n;
    int nwords[10];
    int state = OUT; 
    
    for (i = 0; i < 10; i++) {
        nwords[i] = 0;
    }

     n = 0;
    while ((c = getchar()) != EOF) {
            ++nwords[n];
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            ++n;
        } else if (state == OUT) {
            state = IN;
        } 
        printf("Length of words = ");
        for (i = 0; i < 10; i++) {
            if (nwords[i] == 0) {
                printf("%d", nwords[i]);
            } else {
                printf("%d", nwords[i] - 1);
            }
        }
        printf("\n");
    }

}

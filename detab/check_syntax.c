#include <stdio.h>

#define MAXSTR 10000

#define TRUE (1 == 1)
#define FALSE !TRUE

int get_str(char str[], int limit);
void check_syntax(char str[]);

int main() {
    char str[MAXSTR];

    get_str(str, MAXSTR);
    check_syntax(str);

    return 0;
}

int get_str(char str[], int limit) {
    int c, i = 0;

    while (i < limit - 1 && (c = getchar()) != EOF) {
        str[i++] = c;
    }

    str[i] = '\0';

    return i;
}

void check_syntax(char str[]) {
    int parentheses = 0;
    int brackets = 0;
    int braces = 0;

    int single_quotes = FALSE;
    int double_quotes = FALSE;

    int block_comment = FALSE;
    int line_comment = FALSE;

    int i = 0;
    
    while (str[i] != '\0' && parentheses >= 0 && brackets >= 0 && braces >= 0) {
        if (!line_comment && !block_comment && !single_quotes && !double_quotes) {
            if (str[i] == '(') {
                parentheses++;
            } else if (str[i] == ')') {
                parentheses--;
            }

            if (str[i] == '[') {
                brackets++;
            } else if (str[i] == ']') {
                brackets--;
            }

        }
    }

    if (parentheses >= 1) {
        printf("ERROR: no closing parantheses.\n");
    }

    if (brackets) {
        printf("ERROR: no closing brackets.\n");
    }
}


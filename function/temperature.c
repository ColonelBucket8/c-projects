#include <stdio.h>

float fahToCel(float m);

int main() {
    int i;
    float fah = 0.0;

    for (i = 0; i <= 300; i = i + 20) {
        printf("%3d %.2f\n", i, fahToCel(i));
    }
}

float fahToCel(float fahr) {
    return (5.0/9.0) * (fahr - 32.0);
}

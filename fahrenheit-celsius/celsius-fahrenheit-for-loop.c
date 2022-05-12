#include <stdio.h>

int main() {
  int celsius;

  for (celsius = 0; celsius <= 300; celsius = celsius + 20) {
    printf("%3d %6.1f\n", celsius, (9.0/5.0) * celsius + 32);
  }
}

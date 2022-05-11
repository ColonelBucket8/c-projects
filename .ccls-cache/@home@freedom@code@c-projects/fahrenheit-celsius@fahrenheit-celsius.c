#include <stdio.h>

/*print Fahrenheit-Celsius table*/
int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  
  printf("Fah\tCel\n");
  printf("%3s %6s", "Fah", "Cel");

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

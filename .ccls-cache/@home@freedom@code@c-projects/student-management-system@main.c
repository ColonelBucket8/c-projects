#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>

#define Student struct Stud
#define Coordinate struct Coord

struct COORD {
  int X;
  int Y;
};

void gotoxy(int x, int y) {
  struct COORD CRD;
  CRD.X = x;
  CRD.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CRD);
};

int main() {
  printf("Hello world");
  return 0;
};

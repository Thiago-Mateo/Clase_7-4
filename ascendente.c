//Ascendente o descendente 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  bool f = false;
  printf("%d\n", f);
  f = x > y && y > z;
  f = z > y && y > x || f;
  printf("%s\n", f ? "Verdadero" : "Falso");
  return 0;
}

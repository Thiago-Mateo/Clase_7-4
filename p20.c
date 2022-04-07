#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  int v = atoi(argv[4]);
  int h = atoi(argv[5]);
  int suma = 0;
  suma += x%2 == 0 ? 0 : x;
  suma += y%2 == 0 ? 0 : y;
  suma += z%2 == 0 ? 0 : z;
  suma += v%2 == 0 ? 0 : v;
  suma += h%2 == 0 ? 0 : h;
  printf("%d\n", suma);

  return 0;
}

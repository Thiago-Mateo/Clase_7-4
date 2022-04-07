//Día y mes
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
 int day = atoi(argv[1]);
 int month = atoi(argv[2]);
 bool f = false;
 f = month ==3 && day >=20;
 f = month >3 && month <=6 || f;
 f = month ==6 && day <=20 || f;
 printf("%s\n", f? "Verdadero" : "Falso");
  return 0;
}

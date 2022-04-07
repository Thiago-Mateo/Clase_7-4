#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int money = atoi(argv[1]);
  printf("dinero: %s\n", dinero);
  printf("1000: %s\n", dinero / 1000);
  dinero %= 1000;
  printf("500: %s\n", dinero / 500);
  dinero %= 500;
  printf("200: %s\n", dinero / 200);
  dinero %= 200;
  printf("100: %s\n", dinero / 100);
  dinero %= 100;
  printf("50: %s\n", dinero / 50);
  dinero %= 50;
  printf("20: %s\n", dinero / 20);
  dinero %= 20;
  printf("10: %s\n", dinero / 10);
  dinero %= 10; 
  return 0;
}

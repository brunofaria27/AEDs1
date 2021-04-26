#include <stdio.h>

int main(void) {
  int tabuada = 0;
  
  printf("A tabuada do número 8 é:\n");

  for (int i = 0; i <=10; i++) {

    tabuada = 8 * i;

    printf("8 x %i = %i\n", i, tabuada);
  }
  
  return 0;
}
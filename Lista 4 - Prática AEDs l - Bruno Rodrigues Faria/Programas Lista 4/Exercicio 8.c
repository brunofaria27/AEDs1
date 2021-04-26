#include <stdio.h>

int main(void) {
  printf("Números ímpares presentes entre 1 (ínclusive) e 9 (ínclusive)\n");
  
  for (int i = 0; i < 9; i++) {
    printf("%i ->\t", i + 1);
    if (i == 0) {
      printf("Número ÍMPAR.\n");
    }
    else if (i == 2){
      printf("Número ÍMPAR.\n");
    }
    else if (i == 4) {
      printf("Número ÍMPAR.\n");
    }
    else if (i == 6) {
      printf("Número ÍMPAR.\n");
    }
    else if (i == 8) {
      printf("Número ÍMPAR.\n");
    }
    else {
      printf("Número PAR.\n");
    }
  }
  
  return 0;
}
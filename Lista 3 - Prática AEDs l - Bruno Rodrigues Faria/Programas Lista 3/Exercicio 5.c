#include <stdlib.h>
#include <stdio.h>

int main() {
    // variaveis do programa
    int cont1 = 1; 
    int cont2 = 1; 
    int tabuada;

    // Sistema de repeticao para realizar as contas  
    while (cont1 <= 10) {
      printf("---------------------------------------");
        while (cont2 <= 10) {

            tabuada = cont1 * cont2;

            printf("\n%d x %d = %d\n",cont1, cont2, tabuada);
            
            cont2++;
        }
    cont2 = 1;
    cont1++;
    }
  return 0;
}
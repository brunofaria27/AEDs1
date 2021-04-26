#include <stdio.h>

int main() {
    // variaveis do programa
    int numero = 0;
    
    // InPut numero da tabuada 
    printf("\nDigite o número para realizar a tabuada: ");
    scanf("%d", &numero); 

    for (int x = 1; x <= 10; x++) { // Start for
      float valor; // variavel do valor da multiplicacao

      valor = x * numero;

      printf("%d x %d = %.2lf\n", numero, x, valor);
    } // End for

    return 0;
} // End main
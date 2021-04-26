#include<stdio.h>
  int main(void) {
    int qntdnumeros, numero, maior, menor;
    int i;

    printf("Digite a quantidade de números que deseja digitar: ");
    scanf("%i", &qntdnumeros);

    printf("\nDigite o primeiro número inteiro: ");
    scanf("%i", &numero);
    
    maior = numero;
    menor = numero;

    for(i = 1; i < qntdnumeros; i++) {
      printf("\nEntre com o (%i) número inteiro: ", i + 1);
      scanf("%i", &numero);

      if (numero > maior){
      maior = numero;
      }
      
      if (numero  < menor) {
      menor = numero;
      }
    }

    printf("\nO menor número entrado é: %d", menor);
    printf("\nO maior número entrado é: %d", maior);

 return 0;
} 
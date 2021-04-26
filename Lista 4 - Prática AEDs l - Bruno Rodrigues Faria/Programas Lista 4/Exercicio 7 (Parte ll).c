#include <stdio.h>
#include <math.h>

int main(void) {
  // VARIAVEIS DOS NÚMEROS DIGITADOS PELO USUÁRIO
  int numeroA = 0;
  int numeroB = 0;
  // VARIAVEIS DOS CALCULOS MATEMATICOS
  double cubonumero = 0.0;
  int somapares = 0;

  // ENTRADA DE DADOS DO NÚMERO
  printf("Digite o primeiro número (Menor número) do intervalo: ");
  scanf("%i", &numeroA);
  printf("Digite o segundo número (Maior número) do intervalo: ");
  scanf("%i", &numeroB);

  // LAÇO DE REPETIÇÃO PARA PEGAR OS NÚMEROS DO INTERVALO ENTRE OS NÚMEROS DIGITADOS 
  if (numeroA != 0 && numeroB != 0) {
  for (int i = numeroA; i <= numeroB && i >= numeroA; i++) {
    if (i%2 == 0) {
      cubonumero = pow(i, 3);
      somapares = somapares + cubonumero;
    } // END IF
  } // END FOR   
  printf("\n");
  printf("O intervalo pesquisado foi de %i até %i.\n", numeroA, numeroB);
  printf("A soma dos cubos de todos pares inteiros é: %i", somapares);
  } // END IF CASO A E B SEJA IGUAL A 0
  else {
    printf("O programa encerrou, pois o primeiro e/ou segundo número são iguais a '0'.");
  } // END ELSE FINALIZAÇÃO DO PROGRAMA 

  return 0;
} // END INT MAIN 
#include<stdio.h>
#include<stdlib.h>
 
int main() {

int receber[5]; // Vetor recebe numero do user
int contdivisor = 0, contprimo = 0;
int i, j, k = 0;
 
for(i = 0; i < 5; i++){        
  printf("Digite um número: ");        
  scanf("%d", &receber[i]); 
  contdivisor = 0;
  for(j = 1; j <= receber[i]; j++) {
    if(receber[i] % j == 0) {
      contdivisor++;
    }
  }
  if(contdivisor == 2) {
    contprimo++;
  }
}

int resultante[contprimo];

for(i = 0; i < 5; i++) {
  contdivisor = 0;
  for(j = 1; j <= receber[i]; j++) {
    if(receber[i] % j == 0) {
      contdivisor++;
    }
  }
  if(contdivisor == 2) {
    resultante[k] = receber[i];
    k++; // K e I acompanham uma a outra (crescem juntas)
  }
}

printf("\nA quantidade de números primos é de: %i\n", contprimo);

printf("\nResultado:\n");
for(i = 0; i < contprimo; i++){        
  printf("[%d]\t", resultante[i]);   
}

  return 0;
}
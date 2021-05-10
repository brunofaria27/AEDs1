#include<stdio.h>
#include<stdlib.h>
 
int main() {

int vetor[5], i;
int p, vp[5];
 
for(i = p = 0; i < 5; i++){        
  printf("Digite um numero: ");        
  scanf("%d", &vetor[i]);        
  if(vetor[i] % i == 0){            
    vp[p++] = vetor[i];        
   }
}
  
for(i = 0; i < 5; i++){        
  printf("[%d]\n", vp[i]);   
}

  return 0;
}
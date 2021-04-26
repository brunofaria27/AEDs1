#include <stdio.h>

int main(void) {
  
  int senha;
  
  printf("Digite a senha: "); // Input Senha 
  scanf("%d", &senha);

  if (senha == 4531){
    printf("ACESSO PERMITIDO.");
  } // End if senha 4531
  else {
    printf("ACESSO NEGADO.");
  } // End else acesso negado

  return 0;
}
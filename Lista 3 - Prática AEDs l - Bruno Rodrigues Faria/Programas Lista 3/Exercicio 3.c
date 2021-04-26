#include <stdio.h>

int main(void) {
  
  //variaveis do programa
  int g15= 0, g16_30 = 0, g31_45 = 0, g46_60 = 0, g60 = 0;
  int idade = 0;
  float peso = 0.0;
  float altura = 0.0;
  float porcentagem15 = 0.0;
  float porcentagem60 = 0.0;

  // Input idade individuos 
  for(int i = 0; i < 8; i++) { // Inico FOR

      printf("Idade do individuo número %d: ", i + 1);
      scanf("%d", &idade);

      if (idade <= 15) { // Start if
        g15++;
      } // end if 
      else if (idade >= 16 && idade <=30) { // Start else if
        g16_30++;
      } // end else if 
      else if (idade >= 31 && idade <= 45) { // Start else if
        g31_45++;
      } // end else if 
      else if (idade >= 46 && idade <= 60) { // Start else if
        g46_60++;
      } // end else if 
      else { // Start else
        g60++;
      } // End else
  } // End FOR

  printf("Idades:");
  printf("\nAté 15 anos: %d pessoas", g15); // calculo qntd pessoas
  printf("\nDe 16 a 30 anos: %d pessoas", g16_30); // calculo qntd pessoas
  printf("\nDe 31 a 45 anos: %d pessoas", g31_45); // calculo qntd pessoas
  printf("\nDe 46 a 60 anos: %d pessoas", g46_60); // calculo qntd pessoas
  printf("\nAcima de 60 anos: %d pessoas", g60); // calculo qntd pessoas
  printf("\n\nPorcentagem de menores de 15 anos: %.2f%%", 100 * g15 / 15.); // calculo da porcentagem menores 15
  printf("\nPorcentagem de maiores de 60 anos: %.2f%%\n", 100 * g60 / 15.); // calculo da porcentagem maiores 15


   return 0;

}
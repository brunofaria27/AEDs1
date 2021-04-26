/* Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente */
#include <stdio.h>

int main(void) {
  // Váriaveis do programa.
  int a, b, c, d;

     for (int i = 0; i < 5; i++) { // Inicio FOR
      printf("\nDigite os quatro valores do grupo %d: ", i + 1);
      scanf("%d %d %d %d", &a, &b, &c, &d);
      printf("A ordem dos números digitados foi: %d %d %d %d\n", a, b, c, d);

      if (a > b && b > c && c > d) { // Inicio do A na frente
        printf("A ordem decrescente é: %d %d %d %d\n", a, b, c, d);
        printf("A ordem crescente é: %d %d %d %d\n", d, c, b, a);
      }
      else if (a > b && b > c && d > c) {
        printf("A ordem decrescente é: %d %d %d %d\n", a, b, d, c);
        printf("A ordem crescente é: %d %d %d %d\n", c, d, b, a);
      }
      else if (a > c && c > b && b > d) {
        printf("A ordem decrescente é: %d %d %d %d\n", a, c, b, d);
        printf("A ordem crescente é: %d %d %d %d\n", d, b, c, a);
      }
      else if (a > c && c > b && d > b) {
        printf("A ordem decrescente é: %d %d %d %d\n", a, c, d, b);
        printf("A ordem crescente é: %d %d %d %d\n", b, d, c, a);
      }
      else if (a > d && d > b && b > c) {
        printf("A ordem decrescente é: %d %d %d %d\n", a, d, b, c);
        printf("A ordem crescente é: %d %d %d %d\n", c, b, d, a);
      }
      else if (a > d && d > c && c > b) {
        printf("A ordem decrescente é: %d %d %d %d\n", a, d, c, b);
        printf("A ordem crescente é: %d %d %d %d\n", b, c, d, a);
      } // Fim do A na frente
      else if (b > a && a > c && c > d) { // Inicio do B na frente 
        printf("A ordem decrescente é: %d %d %d %d\n", b, a, c, d);
        printf("A ordem crescente é: %d %d %d %d\n", d, c, a, b);
      }
      else if (b > a && a > d && d > c) {
        printf("A ordem decrescente é: %d %d %d %d\n", b, a, d, c);
        printf("A ordem crescente é: %d %d %d %d\n", c, d, a, b);
      }
      else if (b > d && d > a && a > c) {
        printf("A ordem decrescente é: %d %d %d %d\n", b, d, a, c);
        printf("A ordem crescente é: %d %d %d %d\n", c, a, d, b);
      }
      else if (b > d && d > c && c > a) {
        printf("A ordem decrescente é: %d %d %d %d\n", b, d, c, a);
        printf("A ordem crescente é: %d %d %d %d\n", a, c, d, b);
      }
      else if (b > c && c > a && a > d) {
        printf("A ordem decrescente é: %d %d %d %d\n", b, c, a, d);
        printf("A ordem crescente é: %d %d %d %d\n", d, a, c, b);
      }
      else if (b > c && c > d && d > a) {
        printf("A ordem decrescente é: %d %d %d %d\n", b, c, d, a);
        printf("A ordem crescente é: %d %d %d %d\n", a, d, c, b);
      } // Fim do B na frente 
      else if (c > a && a > b && b > d) { // Inicio do C na frente
        printf("A ordem decrescente é: %d %d %d %d\n", c, a, b, d);
        printf("A ordem crescente é: %d %d %d %d\n", d, b, c, a);
      }
      else if (c > a && a > d && d > b) { 
        printf("A ordem decrescente é: %d %d %d %d\n", c, a, d, b);
        printf("A ordem crescente é: %d %d %d %d\n", b, d, c, a);
      }
      else if (c > b && b > d && d > a) { 
        printf("A ordem decrescente é: %d %d %d %d\n", c, b, d, a);
        printf("A ordem crescente é: %d %d %d %d\n", a, d, b, c);
      }
      else if (c > b && b > a && a > d) { 
        printf("A ordem decrescente é: %d %d %d %d\n", c, b, a, d);
        printf("A ordem crescente é: %d %d %d %d\n", d, a, b, c);
      }
      else if (c > d && d > a && a > b) { 
        printf("A ordem decrescente é: %d %d %d %d\n", c, d, a, b);
        printf("A ordem crescente é: %d %d %d %d\n", b, a, d, c);
      }
      else if (c > d && d > b && b > a) { 
        printf("A ordem decrescente é: %d %d %d %d\n", c, d, b, a);
        printf("A ordem crescente é: %d %d %d %d\n", a, b, d, c);
      } // Fim do C na frente 
      else if (d > a && a > b && b > c) { // Inicio do D na frente 
        printf("A ordem decrescente é: %d %d %d %d\n", d, a, b, c);
        printf("A ordem crescente é: %d %d %d %d\n", c, b, a, d);
      }
      else if (d > a && a > c && c > b) { 
        printf("A ordem decrescente é: %d %d %d %d\n", d, a, c, b);
        printf("A ordem crescente é: %d %d %d %d\n", b, c, a, d);
      }
      else if (d > b && b > a && a > c) {  
        printf("A ordem decrescente é: %d %d %d %d\n", d, b, a, c);
        printf("A ordem crescente é: %d %d %d %d\n", c, a, b, d);
      }
      else if (d > b && b > c && c > a) { 
        printf("A ordem decrescente é: %d %d %d %d\n", d, b, c, a);
        printf("A ordem crescente é: %d %d %d %d\n", c, a, b, d);
      }
      else if (d > c && c > b && b > a) { 
        printf("A ordem decrescente é: %d %d %d %d\n", d, c, b, a);
        printf("A ordem crescente é: %d %d %d %d\n", a, b, c, d);
      }
      else { 
        printf("A ordem decrescente é: %d %d %d %d\n", d, c, a, b);
        printf("A ordem crescente é: %d %d %d %d\n", b, a, c, d);
      } // Fim do D na frente
     } // Fim FOR

    return 0;
}
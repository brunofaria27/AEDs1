#include <stdio.h>

int main() {
    // Entrada de dados.
    double A, B;
        printf("Digite a primeira nota do aluno: ");
        scanf("%lf", &A);
        
        printf("Digite a segunda nota do aluno: ");
        scanf("%lf", &B);
        
    // Saída de dados média aritmética.
    double media;
        media = (A+B)/2.0;
        printf("O valor da média aritmética dos números %.2lf e %.2lf é: %.2f \n", A, B, media);
          if ((media >=7) && (media <= 10)) {
            printf("O aluno está APROVADO.");
          }
          else if ((media < 7) && (media >= 3)){
            printf("O aluno está em EXAME.");
          }
          else if ((media <3) && (media >= 0)) {
          printf("O aluno está REPROVADO.");
          }
    return 0;
}
#include <stdio.h>

int main() {
    // Entrada de dados.
    double A, B, C, D;
        printf("Digite a primeira nota do aluno: ");
        scanf("%lf", &A);
        
        printf("Digite a segunda nota do aluno: ");
        scanf("%lf", &B);
        
        printf("Digite a terceira nota do aluno: ");
        scanf("%lf", &C);

        printf("Digite a quarta nota do aluno: ");
        scanf("%lf", &D);
        
    // Saída de dados média aritmética.
    double media;
        media = (A+B+C+D)/4.0;
        printf("O valor da média aritmética dos números %.2lf, %.2lf, %.2lf e %.2lf é: %.2f \n", A, B, C, D, media);
          if (media >= 7) {
            printf("O aluno está APROVADO.");
          }
          else {
            printf("O aluno está REPROVADO.");
          }
    return 0;
}
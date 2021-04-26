#include <stdio.h>

int main() {
        printf("Olá, Aqui você pode ver a soma e média aritmética de três números inteiros, para isso digite-os abaixo! \n");
    // Entrada de dados.
    int A, B, C;
        printf("Digite o primeiro número: ");
        scanf("%d", &A);
        
        printf("Digite o segundo número: ");
        scanf("%d", &B);
        
        printf("Digite o terceiro número: ");
        scanf("%d", &C);
        
    // Saída de dado soma.
    double soma_numeros;
        soma_numeros = A + B + C;
        printf("O valor da soma dos números %d, %d e %d é: %.2f \n", A, B, C, soma_numeros);
    
    // Saída de dados média aritmética.
    double media;
        media = (A+B+C)/3.0;
        printf("O valor da média aritmética dos números %d, %d e %d é: %.2f", A, B, C, media);
        
    return 0;
}
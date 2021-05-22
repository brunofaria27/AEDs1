#include <stdio.h>
#include <stdlib.h>

void ordenar(int vetor[], int tam) {
    int i, j, aux;

    for (i = 1; i < tam; i++) {
        for (j = 0; j < i; j++) { // i sempre será 1 unidade maior que j
            // compara dois valores armazenados em duas posições consecutivas do vetor
            if (vetor[j] > vetor[i]) {
                // se o valor da posição antecessora for maior que o da seguinte, trocam de lugar
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

} // End int ordenar

int main() {
    int m, n, i, j = 0;

    /* PRIMEIRO VETOR */
    printf("Insira um valor inteiro para o tamanho do 1° vetor: ");
    scanf("%i", &m);

    int vet1[m];

    printf("Insira %i números inteiros:\n", m);

    for (i = 0; i < m; i++) {
        scanf("%i", &vet1[i]);
    }

    /* SEGUNDO VETOR */
    printf("Insira um valor inteiro para o tamanho do 2° vetor: ");
    scanf("%i", &n);

    int vet2[n];

    printf("Insira %i números inteiros:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%i", &vet2[i]);
    }

    /* DETERMINAR O TAMANHO DO VETOR 3 USANDO MALLOC, PARA NÃO OCUPAREM SUAS POSIÇÕES */
    int *vet3 = (int *)malloc(sizeof(int) * (m + n));

    for (i = 0; i < m; i++) {
        vet3[i] = vet1[i];
    }

    for (i = m; i < (m + n); i++) {
        vet3[i] = vet2[j++];
    }

    /* ORDENAR E DAR O RESULTADO PARA O USUÁRIO */
    ordenar(vet3, m + n);

    printf("Terceiro vetor ordenado:\n");
    for (i = 0; i < (m + n); i++) {
        printf("%i\t", vet3[i]);
    }

    free(vet3); // Liberar memória

    return 0;
}
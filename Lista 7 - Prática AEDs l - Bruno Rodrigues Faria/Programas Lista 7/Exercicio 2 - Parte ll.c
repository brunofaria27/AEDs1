#include <stdio.h>

int existe(int vetor[], int n, int x, int i) {
    int teste = 0;
    if (x == vetor[i]) {
        teste = 1;
    }
    else if (i < n) {
        return existe(vetor, n, x, ++i);
    }

  return teste;
}

int main() {
    int x;
    int n;

    printf("Digite a quantidade de elementos que deseja colocar: ");
    scanf("%i", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser pesquisado: ");
    scanf("%i", &x);

    int teste = existe(vetor, n, x, 0);

    if (teste == 1) {
        printf("O numero %i foi encontrado", x);
    }
    else {
        printf("O numero %i nao foi encontrado", x);
    }

    return 0;
}
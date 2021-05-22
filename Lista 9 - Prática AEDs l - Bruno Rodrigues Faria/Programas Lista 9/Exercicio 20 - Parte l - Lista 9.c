#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void criptografar(char frase[]) {
    int i, a, k;
    a = 4 * strlen(frase);
    char aux[4], cripto[a];

    for (i = 0; i < strlen(frase); i++) {
        k = frase[i];
        if (i == (strlen(frase) - 1)) {
            sprintf(aux, "%d", k);
        }
        else {
            sprintf(aux, "%d ", k);
        }

        strcat(cripto, aux);
    }

    for (i = 0; i < strlen(cripto); i++) {
        frase[i] = cripto[i];
    }
    frase[i] = '\0';

} // End void criptografar

int contpalavra(char frase[]) {
    int i, cont = 1;
    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            cont++;
        }
    }
    return cont;
} // End int contpalavra

void descriptografar(char frase[]) {
    int j = 0, i, a, k, l, m = 0;
    int quant = contpalavra(frase), num[quant];

    a = strlen(frase) / 4;

    char ascii[quant][4], cripto[a];
    char *aux = (char *)malloc(sizeof(char) * 4);

    for (i = 0; i < quant; i++) {
        k = 0;
        while (frase[j] != ' ' && j < strlen(frase)) {
            ascii[i][k++] = frase[j++];
        }
        ascii[i][k] = '\0';
        j++;
        num[i] = atoi(ascii[i]);
        *aux = num[i];

        aux[strlen(aux)] = '\0';

        for (l = 0; l < strlen(aux); l++) {
            cripto[m++] = aux[l];
        }
    }

    cripto[m] = '\0';

    for (i = 0; i < strlen(cripto); i++) {
        frase[i] = cripto[i];
    }
    frase[i] = '\0';

    free(aux);

} // End void descriptografar

int main() {
    char *frase = (char *)malloc(sizeof(char) * 100);
    int op;

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    criptografar(frase);

    printf("\nFrase criptografada:\n%s", frase);

    printf("\nDescriptografar?\n");
    printf("1 - Sim\n2 - Nao\n");
    scanf("%i", &op);

    if (op == 1) {
        descriptografar(frase);
        printf("\nFrase descriptografada:\n%s", frase);
    }
    else if (op == 2){
        printf("Obrigado por usar nosso programa.");
        exit(0);
    }
    else {
        printf("\nOpção inválida.");
        exit(0);
    }

    free(frase);

    return 0;
}
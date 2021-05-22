#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void criptografar(char frase[]) {
    int i = 0, cont, maior = 0, maiorChar;

    while (i < strlen(frase)) {
        cont = 1;
        while (frase[i] == frase[i + 1]) {
            cont++;
            i++;
        }

        if (cont > maior) {
            maior = cont;
            maiorChar = frase[i];
        }
        i++;
    }

    printf("\nMaior %c, tamanho %i", maiorChar, maior);
}

int main() {
    char *frase = (char *)malloc(sizeof(char) * 100);

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    criptografar(frase);

    free(frase);

    return 0;
}
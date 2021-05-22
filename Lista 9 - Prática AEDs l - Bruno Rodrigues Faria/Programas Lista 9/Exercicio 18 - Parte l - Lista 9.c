#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void correcao(char *correcao){
    int i, j = 0;

    for (i = 0; i < strlen(correcao); i++){
        if (correcao[i] == ' ') { 
            if (i == 0) { 
                while (correcao[i] == ' ') {
                    i++;
                }
                correcao[j++] = correcao[i];
            }
            else {
                correcao[j++] = correcao[i];
                while (correcao[i + 1] == ' ') {
                    i++;
                }
            }
        }
        else {
            correcao[j++] = correcao[i];
        }
    }

    if (correcao[j - 1] == ' ') {
        correcao[j - 1] = '\0';
    }
    else {
        correcao[j] = '\0';
    }
}// End void correcao

int contpalavra(char frase[]) {
    int i, cont = 1;
    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            cont++;
        }
    }
    return cont;
}

void criptografar(char frase[]) {
    int i = 0, j = 0, k = 0;
    int quant = contpalavra(frase);
    char palavra[quant][100];

    for (i = 0; i < quant; i++) {
        k = 0;
        while (frase[j] != ' ' && j < strlen(frase)) {
            palavra[i][k++] = frase[j++];
        }
        palavra[i][k] = '\0';
        j++;
    }

    j = 0;

    for (i = 0; i < quant; i++) {
        k = 0;
        while (frase[j] != ' ' && j < strlen(frase)) {
            if (k < (strlen(palavra[i]) / 2)) {
                frase[j++] = palavra[i][k++];
            }
            else{
                frase[j++] = '?';
            }
        }
        j++;
    }

    frase[j] = '\0';

} // End int cadapalavra

int main() {
    char *frase = (char *)malloc(sizeof(char) * 100);
    int i;

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    correcao(frase);
    criptografar(frase);

    printf("\nFrase criptografada:");
    printf("\n%s", frase);

    free(frase);

    return 0;
}
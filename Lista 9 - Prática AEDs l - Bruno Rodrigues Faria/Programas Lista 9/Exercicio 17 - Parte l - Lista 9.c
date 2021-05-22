#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Tirar espaços em excesso e retirar
void correcao(char *correcao) {
    int i, j = 0;

    for (i = 0; i < strlen(correcao); i++) {
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
            correcao[j] = correcao[i];
            j++;
        }
    }
    if (correcao[j - 1] == ' ') {
        correcao[j - 1] = '\0';
    }
    else {
        correcao[j] = '\0';
    }
} // End void correcao

// Sub-rotina usada para criptografar a frase
void criptografar(char frase[]) {
    int i, j = 0, k = 0, x, quant = 1;
    int soma;

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            quant++;
        }
    } // Contar quantas palavras tem na frase

    char palavra[quant][1024]; // Dar para variavel palavra a quantidade de linha certa (quantidade de palavras da frase)

    for (i = 0; i < quant; i++) {
        k = 0;
        while (frase[j] != ' ' && j < strlen(frase)) {
            palavra[i][k++] = frase[j++];
        }
        palavra[i][k] = '\0';
        j++;
    } // Navegar pela frase e toda a vez que encontrar espaço irá pular para a linha de baixo

    k = 0;

    for (i = 0; i < quant - 1; i = i + 2) {
        j = 0;
        x = strlen(palavra[i + 1]) - 1;

        if (strlen(palavra[i]) < strlen(palavra[i + 1])) {
            while (j < strlen(palavra[i])) {
                frase[k++] = palavra[i][j++];
                frase[k++] = palavra[i + 1][x--];
            }

            for (j = x; j >= 0; j--) {
                frase[k++] = palavra[i + 1][j];
            }
        }
        else {
            while (j < strlen(palavra[i + 1])) {
                frase[k++] = palavra[i][j++];
                frase[k++] = palavra[i + 1][x--];
            } 

            for (x = j; x < strlen(palavra[i]); x++) {
                frase[k++] = palavra[i][x];
            }
        }
        frase[k++] = ' ';
    }

    if (quant % 2 != 0) {
        for (i = strlen(palavra[quant - 1]) - 1; i >= 0; i--) {
            frase[k++] = palavra[quant - 1][i];
        }
    }
    frase[k] = '\0';

} // End void criptografar

int main() {
    char *frase = (char *)malloc(sizeof(char) * 1024);

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase); // Receber a frase do user

    correcao(frase); // Trazer a sub-rotina correcao para dentro do main
    criptografar(frase); // Trazer a sub-rotina criptografar para dentro do main

    printf("\nFrase criptografada:\n%s", frase); // Mostrar a frase criptografada para o usuario

    free(frase);    // Liberar a memória da variavel frase

    return 0;
}
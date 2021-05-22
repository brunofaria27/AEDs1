#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Corrigir os espaços em excesso da frase
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
            correcao[j++] = correcao[i];
        }
    }
    if (correcao[j - 1] == ' ') {
        correcao[j - 1] = '\0';
    }
    else {
        correcao[j] = '\0';
    }
} // End void correcao

int contpalavra(char frase[]) {
    int i, cont = 0;
    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            cont++; // A cada espaço vai contar uma palavra, mas soma um no final 1 para contabilizar a primeira palavra
        }
    }
    return cont + 1; // Retorna quantas palavras tem na frase
} // End int cont palavra

// Pegar cada palavra da string e criar uma matriz com ela
void cadapalavra(char frase[], int quant) {
    int i = 0, j = 0, k = 0, cont = 0, teste;
    char palavra[quant][1024]; // Grupo de palavras de até 1024 caracteres - armazena cada palavra em uma linha
    char comparar[quant][1024];

    for (i = 0; i < quant; i++) {
        k = 0;
        while (frase[j] != ' ') {
            palavra[i][k++] = frase[j++];
        }
        palavra[i][k] = '\0';
        j++;
    }

    for (i = 0; i < quant; i++) {
        for (j = 0; j < strlen(palavra[i]); j++) {
            comparar[i][j] = palavra[i][j];
        }
        comparar[i][j] = '\0';
    }

    printf("\nQuantas vezes cada palavra aparece na frase:\n");
    for (i = 0; i < quant; i++) {
        cont = 0;
        for (j = 0; j < quant; j++) {
            teste = strcmp(palavra[i], comparar[j]);
            if (teste == 0) {
                cont++;
                comparar[j][0] = '\0';
            }
        }
        if (cont > 0) {
            printf("\n%s: %i", palavra[i], cont);
        }
    }
} // End int cadapalavra

int main() {
    // Variaveis do programa
    char *frase = (char *)malloc(sizeof(char) * 1024); // Alocar a memoria para frase
    int palavras, i;

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase); // Pegar palavra até um \n

    correcao(frase); // Chamar a sub-rotina correcao

    palavras = contpalavra(frase); // Atribuir a variavel palavra quantas palavras tem no contpalavra

    cadapalavra(frase, palavras); // Chamar a sub-rotina cadapalavra

    free(frase); // Libera memoria da frase

    return 0;
}
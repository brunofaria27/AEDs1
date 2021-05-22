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
} // End void correcao

int main(void) {
    char frase[51];                                     // String da frase digitada pelo usuário.
    char *primeira = (char*)malloc(sizeof(char)*50);    // Utilização do malloc para inicialização
    char *ultima = (char*)malloc(sizeof(char)*50);      // Utilização do malloc para inicialização
    int i = 0;

    // Input de dados do usuário
    printf("Digite uma frase: ");
    fgets(frase, 51, stdin);                            // Pegar a frase digitada pelo usuário
    int tamanho = strlen(frase);                        // Pegar o tamanho da frase digitada pelo usuário

    correcao(frase);

    // Navegação e procura da primeira e da ultima palavra da frase
    while(i < tamanho && frase[i] != ' ') {
      i++;
    }                                                   // Navegar pela frase, até achar o primeiro espaço. I = tamanho da primeira frase

    strncpy(primeira, frase, i);                        // Copiar a frase em que navegamos no tamanho i, para a variavel primeira (pegar a primeira palavra).

    i = tamanho;                                        // Atualizar o valor da variavel i para o tamanho da frase
    while(i > 0 && frase[i] != ' ') {
      i--;
    }                                                   // Navegar pela frase de tras para frente até achar um espaço

    strcpy(ultima, frase + i + 1);                      // copiar a frase digitada pelo usuario no tamanho i (até achar o espaço) para a variavel ultima (pegar a ultima palavra)

    // Começar a fazer a resposta da criptografia 
    char resposta[51];                                  // variavel utilizada para armazenar a resposta
    for(i = 0; i < strlen(ultima) - 1; i++) {
      resposta[i] = ultima[i];
    }                                                   // Navegação no tamanho da ultima palavra, para coloca-la na posicao da primeira no tamanho que ela tem, ou seja, ira mudar a posicao com seu tamanho

    for(int j = strlen(primeira); j < tamanho - strlen(ultima); j++) {
      resposta[i++] = frase[j];
    }                                                   // O tamanho de J = tamanho da primeira palavra, e enquanto o j for menor que o tamanho da frase - o tamanho da ultima o j ira aumentar. Ou seja, nessa parte a variavel resposta ira apenas copiar os itens que estão no meio da primeira palavra e da ultima palavra sem modifica-los

    for(int k = 0; k < strlen(primeira); k++) {
      resposta[i++] = primeira[k];
    }                                                   // Navegação no tamanho da primeira palavra, para assim copiar a primeira palavra para a ultima posicao da variavel resposta, mudando com o tamanho original, para assim a criptografia ser resolvida.

    printf("%s\n", resposta);                           // Printa a String resposta com os itens modificados.

    free(primeira);
    free(ultima);

    return 0;
}
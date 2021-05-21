#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo;                     // Declarar um identificador de fluxo
    arquivo = fopen("criptografada.txt", "w"); // Abrir arquivo texto é escrever nele

    // Declarações de variáveis
    char frase[1000];

    if (!arquivo)
    {
        printf("Erro ao abrir o arquivo. Ele não está no computador e/ou não existe."); // Frase de erro para o usuário
        exit(0);                                                                        // Sair do programa caso o arquivo não exista
    }

    // Imprimir frase sem estar criptografado
    printf("\nDigite a frase desejada: ");
    fgets(frase, 1000, stdin); // Escanear a frase digitada pelo usuário
    int tamanho = strlen(frase) - 1; // -1 para eliminar o \0 da contagem de letras

    for(int i = 0; i < tamanho; i++) {
        if(frase[i] != ' ') {
            frase[i] = frase[i] + 1;
        }
    }

    fprintf(arquivo, "%s", frase); // Levar a frase criptografada para dentro do arquivo
    fclose(arquivo); // Fechar o arquivo após a leitura
    printf("\n"); // Pular linha no console

    return 0;
}
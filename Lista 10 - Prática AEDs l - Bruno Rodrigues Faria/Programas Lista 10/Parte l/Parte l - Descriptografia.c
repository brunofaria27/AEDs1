#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *criptografado;
    criptografado = fopen("criptografada.txt", "r");

    char criptografada[1000];

    if(criptografado == NULL) {
        printf("Arquivo não encontrado.");
        exit(0);
    }

    fgets(criptografada, 1000, criptografado);

    printf("\nPalavra a ser descriptografada:\n");
    while(!feof(criptografado)) {
        printf("%s", criptografada);
        fgets(criptografada, 1000, criptografado);
    }

    int tam = strlen(criptografada) - 1;

    for(int i = 0; i < tam; i++) {
        if(criptografada[i] != ' ') {
            criptografada[i] = criptografada[i] - 1;
        }
    }

    FILE *descriptografado;
    descriptografado = fopen("descriptografado.txt", "w");

    fprintf(descriptografado, "%s", criptografada); // Levar a frase criptografada para dentro do arquivo
    printf("Frase ou palavra descriptografada e armazenada no arquivo descriptografado.txt");

    fclose(criptografado);
    fclose(descriptografado);
    
    printf("\n"); // Pular linha no console
    
    return 0;
}
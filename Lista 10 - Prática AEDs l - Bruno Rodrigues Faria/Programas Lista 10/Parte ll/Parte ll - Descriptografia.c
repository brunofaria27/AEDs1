#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *criptografado;    // Criação de um file 
    criptografado = fopen("criptografadaParte2.txt", "r");  // Abrir file 

    char criptografada[1000];   // Varivel para armazena a frase que esta no arquivo
    int code = 0;   // COdigo que vai ser usado para descriptografar a frase

    if(criptografado == NULL) {
        printf("Arquivo não encontrado.");
        exit(0);
    }   // Caso o arquivo não seja achado mensagem que irá ser retornado para o usuario

    fgets(criptografada, 1000, criptografado);  // guardar na variavel char criptografada a frase que esta no arquivo 

    printf("\nPalavra a ser descriptografada:\n");
    while(!feof(criptografado)) {
        printf("%s", criptografada);
        fgets(criptografada, 1000, criptografado);
    }   // Navegar pelo arquivo e confirmar se a palavra foi pega, caso tenha sido pega não pegar novamente 

    printf("Digite o código que deseja utilizar para descriptografar (Lembre-se de usar o mesmo que colocou para criptografar): ");
    scanf("%i", &code); // Ler o code que o usuario quer usar para descriptografar a frase

    int tam = strlen(criptografada) - 1;    // Pegar o tamanho da frase que o usuário digitou

    for(int i = 0; i < tam; i++) {
        if(criptografada[i] != ' ') {
            criptografada[i] = criptografada[i] - code;
        }
    }   // Navegar e passar a frase descriptografada para a variavel descritografada

    FILE *descriptografado; // Criar um arquivo descriptografado
    descriptografado = fopen("descriptografadoParte2.txt", "w");    // Criar o arquivo descriptografado para escrita

    fprintf(descriptografado, "%s", criptografada); // Levar a frase criptografada para dentro do arquivo
    printf("Frase ou palavra descriptografada e armazenada no arquivo descriptografado.txt");

    fclose(criptografado);  // Fechar o arquivo 
    fclose(descriptografado);   // Fechar o arquivo
    
    printf("\n"); // Pular linha no console
    
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void criptografia(char frase[]) {
    int i, tam = strlen(frase), posicao[tam], op, j = 0;
    char vogal[tam], copia[tam];

    for (i = 0; i < strlen(frase); i++) {
        copia[i] = frase[i];
        if (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || 
            frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || 
            frase[i] == 'u' || frase[i] == 'U') {
            posicao[j] = i;
            vogal[j++] = frase[i];
        }
    }

    copia[i] = '\0';
    j = 0;

    for (i = 0; i < strlen(frase); i++) {
        while (frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || 
               frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || 
               frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'U' || frase[i] == 'u') {
            i++;
        }
        frase[j++] = frase[i];
    }

    frase[j] = '\0';
    printf("\nFrase criptografada:\n%s", frase);

    printf("\nDescriptografar?\n");
    printf("1 - Sim \n2 - Nao\n");
    printf("Digite o número correspondente: ");
    scanf("%i", &op);

    if (op == 2) {
        printf("Obrigado por usar nosso programa.");
        exit(0);
    } 
    else if (op == 1) {
        j = 0;
        for (i = 0; i < tam; i++) {
            if (i == posicao[j]) {
                frase[i] = vogal[j];
            }
            else { // se não
                frase[i] = copia[i];
            }
            j++;
        }
        frase[i] = '\0';
        printf("\nFrase descriptografada:\n%s", frase);
    }
    else {
        printf("Opção inválida, inicie o programa novamente.");
    }


} // End void criptografia

int main() {
    char *frase = (char *)malloc(sizeof(char) * 100);

    printf("Digite uma frase:\n");
    scanf("%[^\n]", frase);

    criptografia(frase);
    free(frase);

    return 0;
}
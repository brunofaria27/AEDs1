#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cadeiaSubCadeia(char cadeia[], char subcadeia[]) {
    int i, j = 0, k, cont = 0, x = 0;

    for (i = 0; i < strlen(cadeia); i++) {
        x = 0;
        k = i;
        for (j = 0; j < strlen(subcadeia); j++) {
            if (cadeia[k] == subcadeia[j]) {
                k++;
                x++;
            }
        }
        if (x == strlen(subcadeia)) {
            cont++;
            i = k - 1;
        }
    }
    return cont;
}

int main() {
    char *cadeia = (char *)malloc(sizeof(char) * 100);
    char *subcadeia = (char *)malloc(sizeof(char) * 100);
    int function = 0;

    printf("Digite uma cadeia de caracteres:\n");
    scanf("%[^\n]", cadeia);

    printf("Digite uma subcadeia de caracteres (menor que a anterior):\n");
    scanf(" %[^\n]", subcadeia);

    while(strlen(subcadeia) > strlen(cadeia)) {
        printf("ERRO: A subcadeia deve ser menor que a cadeia digitada primeiramente\n");
        exit(0);
    }

    function = cadeiaSubCadeia(cadeia, subcadeia);

    if (function > 0) {
        printf("%c%s%c aparece %i vez(es) na cadeia", '"', subcadeia, '"', function);
    }
    else {
        printf("%c%s%c não aparece na cadeia", '"', subcadeia, '"');
    }

    free(cadeia);
    free(subcadeia);

    return 0;
}
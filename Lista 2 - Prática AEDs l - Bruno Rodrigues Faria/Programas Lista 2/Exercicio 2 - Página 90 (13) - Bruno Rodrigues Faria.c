#include <stdio.h>

int main()
{
    double valor_produto = 0.0;
    double valor_reajustado = 0.0;
        
        printf("O valor do produto é: "); // Input valor do produto
        scanf("%lf", &valor_produto);
        
        
        if (valor_produto > 100) {
            valor_reajustado = (valor_produto*1.05);
            printf("O valor do produto reajustado conforme o preço será de: %.2lf\n", valor_reajustado);
        } // End if valor maior que 100
        else if (valor_produto > 50 && valor_produto <= 100){ 
            valor_reajustado = (valor_produto*1.10);
            printf("O valor do produto reajustado conforme o preço será de: %.2lf\n", valor_reajustado);
        } // End else if valor entre 50 e 100
        else {
            valor_reajustado = (valor_produto*1.15);
            printf("O valor do produto reajustado conforme o preço será de: %.2lf\n", valor_reajustado);
        } // End else valor menor que 50
        
        if (valor_reajustado > 200) {
            printf("O produto está MUITO CARO.");
        } // End if valor maior que 200 reais.
        else if (valor_reajustado > 80 && valor_reajustado <= 120) {
            printf("O produto está com o preço NORMAL.");
        } // End else if valor entre 80 e 120
        else if (valor_reajustado > 120 && valor_reajustado <= 200) {
            printf("O produto está CARO.");
        } // End else if valor entre 120 e 200
        else {
            printf("O produto está BARATO.");
        } // End else produto menor que 80

    return 0;
}


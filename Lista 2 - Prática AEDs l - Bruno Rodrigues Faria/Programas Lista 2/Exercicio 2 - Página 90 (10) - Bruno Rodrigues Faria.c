#include <stdio.h>

int main()
{
    double preco_fabrica = 0.0;
    double preco_carro = 0.0;
    
    printf("O preço de fábrica do carro é: ");
    scanf("%lf", &preco_fabrica);
    
    if (preco_fabrica >= 25000) {
        preco_carro = preco_fabrica + (preco_fabrica*0.15) + (preco_fabrica*0.20);
        printf("O preço que o consumidor deve pagar é de: R$%.2lf", preco_carro);
    }
    if (preco_fabrica < 25000 && preco_fabrica > 12000) {
        preco_carro = preco_fabrica + (preco_fabrica*0.10) + (preco_fabrica*0.15);
        printf("O preço que o consumidor deve pagar é de: R$%.2lf", preco_carro);
    }
    else {
        preco_carro = preco_fabrica + (preco_fabrica*0.05);
        printf("O preço que o consumidor deve pagar é de: R$%.2lf", preco_carro);
    }



    return 0;
}

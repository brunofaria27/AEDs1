#include <stdio.h>

int main()
{
    double salario_funcionario;
    double salario_reajustado;
        
        printf("O salário atual do funcionário é: "); // Input salário do funcionário
        scanf("%lf", &salario_funcionario);
        
        salario_reajustado = (salario_funcionario*1.3); // Calculo caso o funcionario receba menos de 500 reais
        
        if (salario_funcionario > 500) {
            printf("O funcionário não pode ter o salário reajustado, pois recebe mais de R$500,00");
        } // End if salario_funcionario
        else { 
            printf("O funcionário deverá receber %.2lf", salario_reajustado);
        } // End else salario_reajustado

    return 0;
}

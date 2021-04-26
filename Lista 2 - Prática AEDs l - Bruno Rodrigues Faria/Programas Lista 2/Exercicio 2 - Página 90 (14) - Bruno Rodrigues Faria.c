#include <stdio.h>

int main()
{
    double salario_funcionario;
    double salario_reajustado;
        
        printf("O salário atual do funcionário é: "); // Input salário do funcionário
        scanf("%lf", &salario_funcionario);
        
        if (salario_funcionario > 1000) {
            salario_reajustado = (salario_funcionario*1.05);
            printf("O funcionário teve o salário reajustado para: R$%.2lf", salario_reajustado);
        } // End if salario_funcionario maior que 1000
        else if (salario_funcionario > 300 && salario_funcionario <= 500) {
            salario_reajustado = (salario_funcionario*1.40);
            printf("O funcionário teve o salário reajustado para: R$%.2lf", salario_reajustado);
        } // End if salario_funcionario entre 300 e 500
        else if (salario_funcionario > 500 && salario_funcionario <= 700) {
            salario_reajustado = (salario_funcionario*1.30);
            printf("O funcionário teve o salário reajustado para: R$%.2lf", salario_reajustado);
        } // End if salario_funcionario entre 500 e 700
        else if (salario_funcionario > 700 && salario_funcionario <= 800) {
            salario_reajustado = (salario_funcionario*1.20);
            printf("O funcionário teve o salário reajustado para: R$%.2lf", salario_reajustado);
        } // End if salario_funcionario entre 700 e  800
        else if (salario_funcionario > 800 && salario_funcionario <= 1000) {
            salario_reajustado = (salario_funcionario*1.10);
            printf("O funcionário teve o salário reajustado para: R$%.2lf", salario_reajustado);
        } // End if salario_funcionario entre 800 e 1000
        else {
            salario_reajustado = (salario_funcionario*1.50);
            printf("O funcionário teve o salário reajustado para: R$%.2lf", salario_reajustado);
        } // End if salario_funcionario menor que 300
     
    return 0;
}

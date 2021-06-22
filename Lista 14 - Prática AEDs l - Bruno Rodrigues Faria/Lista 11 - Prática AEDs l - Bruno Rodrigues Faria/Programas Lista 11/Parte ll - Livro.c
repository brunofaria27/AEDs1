#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

struct Vendedores {
    int cod_vendedor;
};

struct Venda {
    int cod_vendedor;
    int mes_venda;
};
/* PROCEDIMENTOS */
void mesMaior(vendedores, vendas, num_vendas);
void maiorVendedorMes(vendedores, vendas, num_vendas);
void maisVendas(vendedores, vendas, num_vendas);
void consultaVenda(vendedores, num_vendedores, vendas, num_vendas);
void cadastraVendedor(num_vendedores, vendedores);
void cadastrarVenda(vendas, vendedores);
int menu();
/* END PROCEDIMENTOS */

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num_vendedores = 4;
    int num_vendas;

    struct Vendedores vendedores[num_vendedores];
    printf("\nDigite quantas vendas deseja cadastrar: ");
    scanf("%i", &num_vendas);
    struct Venda vendas[num_vendas];

    int valormenu;
    do {
        valormenu = menu();

        if(valormenu == 1) {
            cadastraVendedor(num_vendedores, vendedores);
        } else if(valormenu == 2) {
            cadastrarVenda(vendas, vendedores, num_vendas);
        } else if(valormenu == 3) {
            consultaVenda(vendedores, num_vendedores, vendas, num_vendas);
        } else if(valormenu == 4) {
            maisVendas(vendedores, vendas, num_vendas);
        } else if(valormenu == 5) {
            maiorVendedorMes(vendedores, vendas, num_vendas);
        } else if( valormenu == 6) {
            mesMaior(vendedores, vendas, num_vendas);
        } else if (valormenu == 7) {
            printf("Obrigado por utilizar o programa!");
            exit(0);
        } else {
            printf("O valor inserido é invalido.");
            exit(0);
        }
    } while(valormenu != 7);

    return 0;
}

int menu() {
    int op_menu;
    printf("\nESCOLHA ALGUMA OPCAO DO MENU:\n");
    printf("1- Cadastrar vendedor\n2- Cadastrar venda\n3- Consultar vendas de um funcionario em determinado mes\n");
    printf("4- Consultar o total das vendas de determinado vendedor\n5- Maior vendedor em determinado mes\n");
    printf("6- Mostrar mes com mais vendas\n7- Finalizar programa\n");
    printf("Digite a opcao desejada: ");
    scanf("%i", &op_menu);

    return op_menu;
}

void cadastraVendedor(int num_vendedores, struct Vendedores vendedores[]) {
    int i = 0;
    printf("\nOPCAO CADASTRO DE VENDEDORES:\n");
    for(i = 0; i < num_vendedores; i++) {
        printf("Digite o codigo do vendedor %i: ", i + 1);
        scanf("%i", &vendedores[i].cod_vendedor);
        if(vendedores[i].cod_vendedor == vendedores[i - 1].cod_vendedor) {
            printf("Os vendedores nao podem possuir o mesmo codigo.\n");
            exit(0);
        }
    }
}

void cadastrarVenda(struct Venda vendas[], struct Vendedores vendedores[], int num_vendas) {
    printf("\nOPCAO CADASTRO DE VENDAS:\n");
    printf("MESES DISPONIVEIS:\n");
    printf("1- Janeiro\n2- Fevereiro\n3- Março\n4- Abril\n5- Maio\n6- Junho\n7- Julho\n8- Agosto\n9- Setembro\n10- Outubro\n11- Novembro\n12- Dezembro\n");

    int contador = 0;
    for(int i = 0; i < num_vendas; i++) {
        printf("Digite o codigo do vendedor: ");
        scanf("%i", &vendas[i].cod_vendedor);
        if(vendas[i].cod_vendedor == vendedores[0].cod_vendedor || vendas[i].cod_vendedor == vendedores[1].cod_vendedor || 
           vendas[i].cod_vendedor == vendedores[2].cod_vendedor || vendas[i].cod_vendedor == vendedores[3].cod_vendedor) {
            printf("Escolha o mês da venda: ");
            scanf("%i", &vendas[i].mes_venda);
            if(vendas[i].mes_venda < 1 && vendas[i].mes_venda > 13) {
                printf("O mes escolhido foi errado.\n");
                exit(0);
            } 
        } else {
            printf("O codigo escolhido nao existe.\n");
            exit(0);
        }
    }
}

void consultaVenda(struct Vendedores vendedores[], int num_vendedores, struct Venda vendas[], int num_vendas) {
    int code, mes;
    printf("\nOPCAO CONSULTA DE VENDAS:\n");
    printf("Digite o codigo do vendedor: ");
    scanf("%i", &code);
    printf("Escolha um mes (1 a 12): ");
    scanf("%i", &mes);
    if(mes > 0 && mes < 13) {
        int conta = 0;
        for(int i = 0; i < num_vendas; i++) {
            if(code == vendas[i].cod_vendedor && mes == vendas[i].mes_venda) {
                conta++;
            } else if(code == vendas[i].cod_vendedor && mes == vendas[i].mes_venda) {
                conta++;
            } else if(code == vendas[i].cod_vendedor && mes == vendas[i].mes_venda) {
                conta++;
            } else if(code == vendas[i].cod_vendedor && mes == vendas[i].mes_venda) {
                conta++;
            }
        }

        if(mes == 1) {
            printf("O vendedor %i tem %i vendas em Janeiro.\n", code, conta);
        } else if(mes == 2) {
            printf("O vendedor %i tem %i vendas em Fevereiro.\n", code, conta); 
        } else if(mes == 3) {
            printf("O vendedor %i tem %i vendas em Merço.\n", code, conta);
        } else if(mes == 4) {
            printf("O vendedor %i tem %i vendas em Abril.\n", code, conta);
        } else if(mes == 5) {
            printf("O vendedor %i tem %i vendas em Maio.\n", code, conta);
        } else if(mes == 6) {
            printf("O vendedor %i tem %i vendas em Junho.\n", code, conta);
        } else if(mes == 7) {
            printf("O vendedor %i tem %i vendas em Julho.\n", code, conta);
        } else if(mes == 8) {
            printf("O vendedor %i tem %i vendas em Agosto.\n", code, conta);
        } else if(mes == 9) {
            printf("O vendedor %i tem %i vendas em Setembro.\n", code, conta);
        } else if(mes == 10) {
            printf("O vendedor %i tem %i vendas em Outubro.\n", code, conta);
        } else if(mes == 11) {
            printf("O vendedor %i tem %i vendas em Novembro.\n", code, conta);
        } else if(mes == 12) {
            printf("O vendedor %i tem %i vendas em Dezembro.\n", code, conta);
        }
    } else {
        printf("Mes escolhido indevidamente.");
        exit(0);
    }
}

void maisVendas(struct Vendedores vendedores[], struct Venda vendas[], int num_vendas) {
    int codigo = 0;
    int contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0;

    printf("\nOPCAO MAIOR VENDEDOR:\n");
    printf("Digite o codigo do vendedor: ");
    scanf("%i", &codigo);

    for(int i = 0; i < num_vendas; i++) {
        if(codigo == vendedores[0].cod_vendedor && codigo == vendas[i].cod_vendedor) {
            contador1++;
        } else if(codigo == vendedores[1].cod_vendedor && codigo == vendas[i].cod_vendedor) {
            contador2++;
        } else if(codigo == vendedores[2].cod_vendedor && codigo == vendas[i].cod_vendedor) {
            contador3++;
        } else if(codigo == vendedores[3].cod_vendedor && codigo == vendas[i].cod_vendedor) {
            contador4++;
        }
    }

    if(codigo == 1) {
        printf("O vendedor %i tem %i vendas.\n", codigo, contador1);
    } else if(codigo == 2) {
        printf("O vendedor %i tem %i vendas.\n", codigo, contador2);
    } else if(codigo == 3) {
        printf("O vendedor %i tem %i vendas.\n", codigo, contador3);
    } else if(codigo == 4) {
        printf("O vendedor %i tem %i vendas.\n", codigo, contador4);
    }
}

void maiorVendedorMes(struct Vendedores vendedores[], struct Venda vendas[], int num_vendas) {
    int codeMes, maior;
    int contador01 = 0, contador02 = 0, contador03 = 0, contador04 = 0;

    printf("\nOPCAO MAIOR VENDEDOR DO MES:\n");
    printf("Digite o mês que deseja pesquisar: ");
    scanf("%i", &codeMes);
    if(codeMes > 0 && codeMes < 13) {
        for(int i = 0; i < num_vendas; i++) {
            if(codeMes == vendas[i].mes_venda) {
                if(vendedores[0].cod_vendedor == vendas[i].cod_vendedor && codeMes == vendas[i].mes_venda) {
                    contador01++;
                } else if(vendedores[1].cod_vendedor == vendas[i].cod_vendedor && codeMes == vendas[i].mes_venda) {
                    contador02++;
                } else if(vendedores[2].cod_vendedor == vendas[i].cod_vendedor && codeMes == vendas[i].mes_venda) {
                    contador03++;
                } else if(vendedores[3].cod_vendedor == vendas[i].cod_vendedor && codeMes == vendas[i].mes_venda) {
                    contador04++;
                }
            }
        }
        // printf("O vendedor %i tem %i vendas no mes %i.\n", vendedores[0].cod_vendedor, contador01, codeMes);
        // printf("O vendedor %i tem %i vendas no mes %i.\n", vendedores[1].cod_vendedor, contador02, codeMes);
        // printf("O vendedor %i tem %i vendas no mes %i.\n", vendedores[2].cod_vendedor, contador03, codeMes);
        // printf("O vendedor %i tem %i vendas no mes %i.\n", vendedores[3].cod_vendedor, contador04, codeMes);
        maior = contador01;
        if(contador02 > maior) {
            maior = contador02;
            printf("O maior vendedor do mes %i é: %i\n", codeMes, vendedores[1].cod_vendedor);
        } else if(contador03 > maior) {
            maior = contador03;
            printf("O maior vendedor do mes %i é: %i\n", codeMes, vendedores[2].cod_vendedor);
        } else if(contador04 > maior) {
            maior = contador04;
            printf("O maior vendedor do mes %i é: %i\n", codeMes, vendedores[3].cod_vendedor);
        } else {
            printf("O maior vendedor do mes %i é: %i\n", codeMes, vendedores[0].cod_vendedor);
        }
    } else {
        printf("Mes escolhido indevidamente.");
        exit(0);
    }
}

void mesMaior(struct Vendedores vendedores[], struct Venda vendas[], int num_vendas) {
    int maiorMes;
    int contaVendas = 0;

    printf("\nOPCAO MES COM MAIOR VENDAS:\n");
    for(int i = 0; i < num_vendas; i++) {
        if(vendas[i].mes_venda == i + 1) {
            contaVendas++;
            maiorMes = vendas[i].mes_venda;
            if(maiorMes < vendas[i + 1].mes_venda) {
                maiorMes = vendas[i + 1].mes_venda;
            }
        }
    }
    printf("O mes com mais vendas é: %i\n", maiorMes);
}
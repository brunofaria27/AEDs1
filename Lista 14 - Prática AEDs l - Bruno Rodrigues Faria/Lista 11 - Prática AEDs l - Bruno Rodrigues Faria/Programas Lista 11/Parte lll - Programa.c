#include <string.h> // BIBLIOTECA STRING
#include <stdio.h>  // BIBLIOTECCA STDIO
#include <stdlib.h> // BIBLIOTECA STDLIB

/* ESTRUTURAS NECESSARIAS PARA O PROGRAMA */
struct Paciente {
    int COD_PACIENTE;
    char NOME_PACIENTE[50];
    char ENDERECO_PACIENTE[100];
    int TELEFONE_PACIENTE;
};

struct Medico {
    int COD_MEDICO;
    char NOME_MEDICO[50];
    int TELEFONE_MEDICO;
};

struct Consulta {
    int NUM_CONSULTA;
    int DIA_SEMANA;
    int HORA;
    int COD_MEDICO;
    int COD_PACIENTE;
};
/* END ESTRUTURAS NECESSARIAS PARA O PROGRAMA */

/* TODAS FUNÇÕES DO PROGRAMA */
    void receberPacientes(num_pacientes, pacientes);
    void receberMedicos(num_medicos, medicos);
    void criarConsulta(num_consultas, consultas);
    void consultaDia(num_consultas, consultas);
    void consultaMedico(num_consultas, consultas, medicos);
    void salvaDados(num_pacientes, pacientes, num_medicos, medicos, num_consultas, consultas);
/* END TODAS FUNÇÕES DO PROGRAMA */

int main() {
    int num_pacientes = 5;  // DEFINIR QUANTIDADE DE PACIENTES
    int num_medicos = 3;    // DEFINIR QUANTIDADE DE MEDICOS

    struct Paciente pacientes[num_pacientes];   // CHAMADA DA STRUCT E ATRIBUIR UMA VARIAVEL (VETOR) PARA ARMAZENAR DADOS DA STRUCT
    struct Medico medicos[num_medicos];     // CHAMADA DA STRUCT E ATRIBUIR UMA VARIAVEL (VETOR) PARA ARMAZENAR DADOS DA STRUCT
    receberPacientes(num_pacientes, pacientes); // CHAMADA DA FUNÇÃO PARA PEGAR DADOS DOS PACIENTES
    receberMedicos(num_medicos, medicos);   // CHAMADA DA FUNÇÃO PARA PEGAR DADOS DOS MÉDICOS

    printf("\n");   // PULAR LINHA NO CONSOLE

    /* PEGAR QUANTIDADE DE CONSULTAS */
    int num_consultas = 0;
    printf("\nDigite a quantidade de consultas: ");
    scanf("%i", &num_consultas);
    /* END PEGAR QUANTIDADE DE CONSULTAS */

    struct Consulta consultas[num_consultas];  // CHAMADA DA STRUCT E ATRIBUIR UMA VARIAVEL (VETOR) PARA ARMAZENAR DADOS DA STRUCT
    criarConsulta(num_consultas, consultas);    // CHAMADA DA FUNÇÃO PARA PEGAR DADOS DAS CONSULTAS

    /* MENU */
    int menu = 0;
    do {
        printf("\nESCOLHA UMA OPCAO DO MENU:\n");
        printf("1 - Consultar medico e dia\n2 - Consultar dia da semana\n3 - Salvar dados cadastrados em arquivo texto\n4 - Sair do programa\n");
        printf("Digite o numero que deseja: ");
        scanf("%i", &menu);
        if(menu == 1) {
            consultaMedico(num_consultas, consultas, medicos);
        } else if(menu == 2) {
            consultaDia(num_consultas, consultas);
        } else if(menu == 3) {
            salvaDados(num_pacientes, pacientes, num_medicos, medicos, num_consultas, consultas);
        } else {
            printf("Obrigado por utilizar o programa.\n");
            exit(0);
        }
    } while(menu != 4);
    /* END MENU */
    return 0;
}

void salvaDados(int num_pacientes, struct Paciente pacientes[], int num_medicos, struct Medico medicos[], int num_consultas, struct Consulta consultas[]) {
    /* ARQUIVO MEDICO */
    FILE *medico;
    medico = fopen("medicos.txt", "w");
    if(!medico) {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }

    /* ARQUIVO VENDEDOR */
    FILE *paciente;
    paciente = fopen("pacientes.txt", "w");
    if(!paciente) {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }

    /* ARQUIVOS CONSULTAS */
    FILE *consulta;
    consulta = fopen("consultas.txt", "w");
    if(!consulta) {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }

    /* MENSAGEM USER */
    printf("\nOPCAO SALVAR EM DISCO OS DADOS CADASTRADOS:\n");

    /* CONFERIR SE TEM DADOS NAS STRUCTS */
    for(int i = 0; i < num_medicos; i++) {
        if(pacientes[i].COD_PACIENTE == NULL) {
            printf("Nenhum dado de paciente cadastrado, nada para salvar em disco.");
            exit(0);
        }
    }

    for(int i  = 0; i < num_pacientes; i++) {
        if(medicos[i].COD_MEDICO == NULL) {
            printf("Nenhum dado de medico cadastrado, nada para salvar em disco.");
            exit(0);
        }
    }

    for(int i  = 0; i < num_consultas; i++) {
        if(consultas[i].NUM_CONSULTA == NULL) {
            printf("Nenhum dado de medico cadastrado, nada para salvar em disco.");
            exit(0);
        }
    }

    /* TITULO ARQUIVOS */
    fprintf(medico, "%s, %s, %s\n", "CODIGO MEDICO", "NOME MEDICO", "TELEFONE");
    fprintf(paciente, "%s, %s, %s, %s\n", "CODIGO PACIENTE", "NOME PACIENTE", "ENDERECO PACIENTE", "TELEFONE");
    fprintf(consulta, "%s, %s, %s, %s, %s\n", "NUMERO CONSULTA", "DIA CONSULTA", "HORA CONSULTA", "CODIGO MEDICO", "CODIGO PACIENTE");

    /* COLOCAR DADOS NO ARQUIVO */
    for(int i = 0; i < num_medicos; i++) {
        fprintf(medico, "%d, %s, %d\n", medicos[i].COD_MEDICO, medicos[i].NOME_MEDICO, medicos[i].TELEFONE_MEDICO);
    }

    for(int i  = 0; i < num_pacientes; i++) {
        fprintf(paciente, "%d, %s, %s, %d\n", pacientes[i].COD_PACIENTE, pacientes[i].NOME_PACIENTE, pacientes[i].ENDERECO_PACIENTE, pacientes[i].TELEFONE_PACIENTE);
    }

    for(int i  = 0; i < num_consultas; i++) {
        fprintf(consulta, "%d, %d, %d, %d, %d\n", consultas[i].NUM_CONSULTA, consultas[i].DIA_SEMANA, consultas[i].HORA, consultas[i].COD_MEDICO, consultas[i].COD_PACIENTE);
    }

    /* FECHAR ARQUIVOS */
    fclose(medico);
    fclose(paciente);
    fclose(consulta);

    /* MENSAGEM PARA O USUÁRIO */
    printf("Todos os dados foram salvos nos arquivos de texto.\n");
}

void receberPacientes(int num_pacientes, struct Paciente pacientes[]) {
    int i = 0;
    int tam = 0;

    for(i = 0; i < num_pacientes; i++) {
        printf("Digite o codigo do paciente %i: ", i + 1);
        scanf("%i", &pacientes[i].COD_PACIENTE);
        /* TESTAR CONDIÇÃO DE NÃO TER CÓDIGOS IGUAIS */
        if(pacientes[i].COD_PACIENTE == pacientes[i - 1].COD_PACIENTE) {
            printf("Voce nao pode colocar o mesmo codigo para os pacientes. Tente novamente!\n");
            printf("Digite o codigo do paciente %i, novamente: ", i + 1);
            scanf("%i", &pacientes[i].COD_PACIENTE);
        }
        /* END TESTAR CONDIÇÃO DE NÃO TER CÓDIGOS IGUAIS */
        setbuf(stdin, NULL);
        printf("Digite o nome do paciente %i: ", i + 1);
        fgets(pacientes[i].NOME_PACIENTE, 50, stdin);
        setbuf(stdin, NULL);
        tam = strlen(pacientes[i].NOME_PACIENTE);
        pacientes[i].NOME_PACIENTE[tam - 1] = '\0';
        printf("Digite o endereco do paciente %i: ", i + 1);
        fgets(pacientes[i].ENDERECO_PACIENTE, 100, stdin);
        tam = strlen(pacientes[i].ENDERECO_PACIENTE);
        pacientes[i].ENDERECO_PACIENTE[tam - 1] = '\0';
        printf("Digite o telefone do paciente %i: ", i + 1);
        scanf("%i", &pacientes[i].TELEFONE_PACIENTE);
        printf("\n");   // PULAR LINHA NO CONSOLE
    }
}

void receberMedicos(int num_medicos, struct Medico medicos[]) {
    int i = 0;
    int tam = 0;

    for(i = 0; i < num_medicos; i++) {
        /* PEGAR CÓDIGO DO MÉDICO */
        printf("Digite o codigo do medico %i: ", i + 1);
        scanf("%i", &medicos[i].COD_MEDICO);
        /* TESTAR CONDIÇÃO DE NÃO TER CÓDIGOS IGUAIS */
        if(medicos[i].COD_MEDICO == medicos[i - 1].COD_MEDICO) {
            printf("Voce nao pode colocar o mesmo codigo para os medicos. Tente novamente!\n");
            printf("Digite o codigo do medico %i, novamente: ", i + 1);
            scanf("%i", &medicos[i].COD_MEDICO);
        }
        /* END TESTAR CONDIÇÃO DE NÃO TER CÓDIGOS IGUAIS */
        setbuf(stdin, NULL);
        printf("Digite o nome do medico %i: ", i + 1);
        fgets(medicos[i].NOME_MEDICO, 50, stdin);
        tam = strlen(medicos[i].NOME_MEDICO);
        medicos[i].NOME_MEDICO[tam - 1] = '\0';
        printf("Digite o telefone do medico %i: ", i + 1);
        scanf("%i", &medicos[i].TELEFONE_MEDICO);
        printf("\n");   // PULAR LINHA NO CONSOLE
    }
}

void criarConsulta(int num_consultas, struct Consulta consultas[]) {
    int i = 0;

    printf("Lembre-se cada medico pode fazer duas consultas por dia.\n");
    for(i = 0; i < num_consultas; i++) {
        printf("Digite o numero da consulta: ");
        scanf("%i", &consultas[i].NUM_CONSULTA);
        printf("Digite o medico que ira atender a consulta %i: ", consultas[i].NUM_CONSULTA);
        scanf("%i", &consultas[i].COD_MEDICO);
        printf("Digite o paciente que sera atendido na consulta %i: ", consultas[i].NUM_CONSULTA);
        scanf("%i", &consultas[i].COD_PACIENTE);
        printf("DIAS DA SEMANA DISPONIVEIS PARA CONSULTA:\n");
        printf("1 - Segunda-feira\n2 - Terca-feira\n3 - Quarta-feira\n4 - Quinta-feira\n5 - Sexta-feira\n");
        printf("Digite o dia da semana que sera feira a consulta %i: ", consultas[i].NUM_CONSULTA);
        scanf("%i", &consultas[i].DIA_SEMANA);
        /* CONSULTAR CASO NÃO TENHA DIA DA SEMANA CERTO */
        if(consultas[i].DIA_SEMANA < 1 && consultas[i].DIA_SEMANA > 5 ) {
            printf("Voce nao escolheu o dia da semana corretamente, tente novamente!");
            printf("DIAS DA SEMANA DISPONIVEIS PARA CONSULTA:\n");
            printf("1 - Segunda-feira\n2 - Terca-feira\n3 - Quarta-feira\n4 - Quinta-feira\n5 - Sexta-feira\n");
            printf("Digite o dia da semana que sera feira a consulta %i, novamente: ", consultas[i].NUM_CONSULTA);
            scanf("%i", &consultas[i].DIA_SEMANA);
        }
        /* END CONSULTAR CASO NÃO TENHA DIA DA SEMANA CERTO */
        printf("Digite o horario da consulta %i (Consultas de 1 em 1 hora): ", consultas[i].NUM_CONSULTA);
        scanf("%i", &consultas[i].HORA);
        printf("\n");   // PULAR LINHA NO CONSOLE
    }
}

void consultaMedico(int num_consultas, struct Consulta consultas[], struct Medico medicos[]) {
    char code;
    int cont = 0, dia, i = 0;
    int tam = 0;

    printf("\nDigite o codigo do medico: ");
    scanf("%i", &code);

    printf("\nDIAS DA SEMANA DISPONIVEIS PARA CONSULTAR:\n");
    printf("1 - Segunda-feira\n2 - Terca-feira\n3 - Quarta-feira\n4 - Quinta-feira\n5 - Sexta-feira\n");
    printf("Digite o dia da semana que quer consultar: ");
    scanf("%i", &dia);
    if(dia < 1 && dia > 5 ) {
        printf("Voce nao escolheu o dia da semana corretamente, tente novamente!");
        printf("DIAS DA SEMANA DISPONIVEIS PARA CONSULTAR:\n");
        printf("1 - Segunda-feira\n2 - Terca-feira\n3 - Quarta-feira\n4 - Quinta-feira\n5 - Sexta-feira\n");
        printf("Digite o dia da semana que quer consultar: ");
        scanf("%i", &dia);
    }

    for(i = 0; i < num_consultas; i++) {
        if (code == consultas[i].COD_MEDICO && dia == consultas[i].DIA_SEMANA) {
            cont++;
        }
    }

    if(dia == 1) {
        printf("O medico %i tem %i consultas na Segunda-feira.\n", code, cont);
    } else if(dia == 2) {
        printf("O medico %i tem %i consultas na Terca-feira.\n", code, cont);
    } else if(dia == 3) {
        printf("O medico %i tem %i consultas na Quarta-feira.\n", code, cont);
    } else if(dia == 4) {
        printf("O medico %i tem %i consultas na Quinta-feira.\n", code, cont);
    } else if(dia == 5) {
        printf("O medico %i tem %i consultas na Sexta-feira.\n", code, cont);
    }

}

void consultaDia(int num_consultas, struct Consulta consultas[]) {
    int Dia_semana;

    printf("\nDIAS DA SEMANA DISPONIVEIS PARA CONSULTAR:\n");
    printf("1 - Segunda-feira\n2 - Terca-feira\n3 - Quarta-feira\n4 - Quinta-feira\n5 - Sexta-feira\n");
    printf("Digite o dia da semana que quer consultar: ");
    scanf("%i", &Dia_semana);
    if(Dia_semana < 1 && Dia_semana > 5 ) {
        printf("Voce nao escolheu o dia da semana corretamente, tente novamente!");
        printf("DIAS DA SEMANA DISPONIVEIS PARA CONSULTAR:\n");
        printf("1 - Segunda-feira\n2 - Terca-feira\n3 - Quarta-feira\n4 - Quinta-feira\n5 - Sexta-feira\n");
        printf("Digite o dia da semana que quer consultar: ");
        scanf("%i", &Dia_semana);
    }

    for(int i = 0; i < num_consultas; i++){
        if(Dia_semana == consultas[i].DIA_SEMANA) {
            printf("\nO codigo do paciente e %i\n", consultas[i].COD_PACIENTE);
            printf("O codigo do medico e %i\n", consultas[i].COD_MEDICO);
            printf("A hora da consulta e %i\n", consultas[i].HORA);

            if ((consultas[i].DIA_SEMANA) == 1) {
                printf("A consulta e Segunda-feira.\n");
            } else if ((consultas[i].DIA_SEMANA) == 2) {
                printf("A consulta e Terca-feira.\n");
            } else if ((consultas[i].DIA_SEMANA) == 3) {
                printf("A consulta e Quarta-feira.\n");
            } else if ((consultas[i].DIA_SEMANA) == 4) {
                printf("A consulta e Quinta-feira.\n");
            } else if ((consultas[i].DIA_SEMANA) == 5) {
                printf("A consulta e Sexta-feira.\n");
            }
            printf("\n");
        }
    }
}
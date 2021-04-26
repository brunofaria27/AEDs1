#include <stdio.h>
#include <stdbool.h>

int main(void) { 
    
    double frequencia = 0.0; 
    int alunofoi = 0;
    bool menor_vintecinco = false;
    bool torf = false; 
    bool notatorf = false;
    double nota_exercicios = 0.0, prov1 = 0.0, prov2 = 0.0, prov3 = 0.0;
    int total_aulas = 0, total_faltas = 0;
    double nota_parcial = 0.0;
    double pontos_semestre = 0.0, nota_reavaliacao = 0.0;
    
    printf("Digite o total de aulas no semestre: ");
    scanf("%d", &total_aulas);

    printf("Digite o total de faltas no semestre: ");
    scanf("%d", &total_faltas);
  
    printf("Digite a quantidade de pontos obtidos em trabalhos e exercícios: ");
    scanf("%lf", &nota_exercicios);

    printf("Digite a quantidade de pontos obtido na primeira prova: ");
    scanf("%lf", &prov1);

    printf("Digite a quantidade de pontos obtido na segunda prova: ");
    scanf("%lf", &prov2);

    printf("Digite a quantidade de pontos obtido na terceira prova: ");
    scanf("%lf", &prov3);
    
    alunofoi = total_aulas - total_faltas;
    frequencia = (double)alunofoi/(double)total_aulas;
    frequencia = frequencia*100;
    nota_parcial = (prov1 + prov2) + (prov3 + nota_exercicios);
    
     if (frequencia < 75) {
        printf("O aluno não atingiu a frequência adequada para ser aprovado.\n");
     } // End if frequencia
     else if (frequencia > 75 && nota_parcial > 60) {
        printf("O aluno atingiu a frequência e nota adequada para ser aprovado.\n");
     } // End else if frequencia and nota_parcial
     else {
        printf("O aluno deverá fazer uma reavaliação.\n");
        printf("Digite a nota adquirida pelo aluno na reavaliação: ");
        scanf("%lf", &nota_reavaliacao);
         
          if (nota_reavaliacao > 25) {
            printf("A nota de reavaliação não pode ultrapassar 25.\n");
            } // End if nota_reavaliacao 
            else {
                if (prov1 < prov2 && prov1 < prov3) {
                prov1 = nota_reavaliacao;
                } // End if prov1
                else if (prov2 < prov1 && prov2 < prov3) {
                prov2 = nota_reavaliacao;
                } // End else if prov2 
                else {
                prov3 = nota_reavaliacao;
                } // End else prov3
            } // End else nota reavaliativa
            
            nota_parcial = (prov1 + prov2) + (prov3 + nota_exercicios);
            
            if (nota_parcial >= 60){
                printf("O aluno foi APROVADO pela reavaliação.\n");
            } // End if notas_parcial
            else {
                printf("O aluno foi REPROVADO pela reavaliativa.\n");
            } // End else notas_parcial
        } // End else reavaliação
          

   
return 0;
}
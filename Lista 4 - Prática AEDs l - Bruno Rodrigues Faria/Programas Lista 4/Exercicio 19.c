#include <stdio.h>

int main(void) {
  // Variaveis para identificacao das turmas
  char turma;
  // Numero de alunos matriculados
  int numeroalunos = 0;
  int matricula = 0;
  // Ausente ou presente 
  char situacao;
  // contador de ausentes, presentes e quantidade de turmas com ausentes maior que 5%
  int ausentes = 0;
  int presentes = 0;
  int maior100 = 0;
  // Porcentagem de ausentes
  double porcentagem = 0.0;

  for (int i = 0; i < 14; i++) { // Start for para fazer a repetição 14 vezes (14 turmas)
    printf("Identificação da turma: ");
    scanf("%s", &turma);
    printf("Número de alunos matriculados na turma: ");
    scanf("%i", &numeroalunos);

    for(int j = 0; j < numeroalunos; j++) {
    
      if (turma == 'A' || turma == 'a') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma A pegar matricula e ausentes  
      

      if (turma == 'B' || turma == 'b') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma B pegar matricula e ausentes  
      

      if (turma == 'C' || turma == 'c') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma C pegar matricula e ausentes  
      

      if (turma == 'D' || turma == 'd') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma D pegar matricula e ausentes  
      

      if (turma == 'E' || turma == 'e') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma E pegar matricula e ausentes  
      

      if (turma == 'F' || turma == 'f') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma F pegar matricula e ausentes  
      

      if (turma == 'G' || turma == 'g') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma G pegar matricula e ausentes  
      

      if (turma == 'H' || turma == 'h') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma H pegar matricula e ausentes  
      

      if (turma == 'I' || turma == 'i') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma I pegar matricula e ausentes  
      

      if (turma == 'J' || turma == 'j') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma J pegar matricula e ausentes  
      

      if (turma == 'K' || turma == 'k') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma K pegar matricula e ausentes  
      

      if (turma == 'L' || turma == 'l') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma L pegar matricula e ausentes  
      

      if (turma == 'M' || turma == 'm') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma M pegar matricula e ausentes  
      

      if (turma == 'N' || turma == 'n') {
      printf("Digite a matricula do aluno: ");
      scanf("%i", &matricula);
      printf("Digite a situação do aluno A (Ausente) ou P (Presente): ");
      scanf("%s", &situacao);
        if (situacao == 'A' || situacao == 'a') {
          ausentes++;
        } // End contador de ausentes
        else {
          presentes++;
        } // End contador de presentes
      } // End if turma N pegar matricula e ausentes  
    } //End for para pegar matricula e ausente
    
    porcentagem = (100 * (double)ausentes)/(double)numeroalunos;
    
    printf("A porcentagem de alunos que faltaram na turma %c é: %.2lf\n", turma, porcentagem);
    printf("\n\n");

    if (porcentagem > 5) {
      maior100++;
    } // End contador turmas com numero de ausentes maior que 5%

    ausentes = 0;
    presentes = 0;
    porcentagem = 0;
    
  } // End for para fazer a repetição 14 vezes (14 turmas)

  printf("A quantidade de turmas que tem um número de alunos ausentes maior que 5/100 é: %i", maior100);

  return 0;
}
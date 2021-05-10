#include <stdio.h>

int main() {

// Definição de variaveis
// Definição variaveis criacao das matrizes
int linhaA, colunaA, linhaB, colunaB;
// Váriaveis para laços de repetições 
int i, j, k;

// Entrada de dados
printf("---------------------------- Matriz A ---------------------------------\n");
printf("Informe a quantidade de linhas da matriz A: ");
scanf("%i", &linhaA);
printf("Informe a quantidade de colunas da matriz A: ");
scanf("%i", &colunaA);
printf("---------------------------- Matriz B ---------------------------------\n");
printf("Informe a quantidade de linhas da matriz B: ");
scanf("%i", &linhaB);
printf("Informe a quantidade de colunas da matriz B: ");
scanf("%i", &colunaB);

printf("-----------------------------------------------------------------------\n"); // Pular linha no console

// Criação das matrizes (matrizA x matrizB = resultado)
float matrizA[linhaA][colunaA], matrizB[linhaB][colunaB], resultado[linhaA][colunaB]; 
// Criação da váriavel auxiliar
float auxiliar = 0;

if (colunaA == linhaB) {

  // Leitura de dados para adicionar a linha X e coluna Y das matrizes criadas
	for (i = 0; i < linhaA; i++) {
		for (j = 0; j < colunaA; j++) {
			printf("Informe o valor da linha %i e da coluna %i da Matriz A: ", i + 1, j + 1);
			scanf("%f", &matrizA[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < linhaB; i++) {        
		for (j = 0; j < colunaB; j++) {
			printf("Informe o valor da linha %i e da coluna %i da Matriz B: ", i + 1, j + 1);
			scanf("%f", &matrizB[i][j]);
		}
		printf("\n");
	}

	// Imprime as matrizes definidas nas Leituras de dados 
	printf("---------------------------- Matriz A ---------------------------------\n\n");

	for (i = 0; i < linhaA; i++) {        
		for (j = 0; j < colunaA; j++) {
			printf("%2.f", matrizA[i][j]);
		}
		printf("\n"); // Pula linha ao trocar de linha na Matriz A
	}

	printf("---------------------------- Matriz B ---------------------------------\n\n");
	for (i = 0; i < linhaB; i++) {
		for (j = 0; j < colunaB; j++) {
			printf("%2.f", matrizB[i][j]); 
		}
		printf("\n"); // Pula linha ao trocar de linha na Matriz B
	}

	printf("---------------------------- Resultado ---------------------------------\n\n");

	// Multiplicação das Matrizes A x B é resultado saindo na tela do usuário
	for (i = 0; i < linhaA; i++) {
		for (j = 0; j < colunaB; j++) {
			
		  resultado[i][j] = 0;

      // Cálculo da A x B -> Somando a multiplicação dos valores das linhas pelos valores das colunas
			for (k = 0; k < linhaB; k++) {
				auxiliar +=  matrizA[i][k] * matrizB[k][j];
			} // End for cálculo 

			resultado[i][j] = auxiliar; // Auxiliar, na qual armazendou os valores irá ser substituido na matriz resultado.
			auxiliar = 0; // Reset do valor 
		} // End for colunaB
	} // End for linhaA
	
  // Impressão da matriz resultado na tela do usuário
	for (i = 0; i < linhaA; i++) {
		for (j = 0; j < colunaB; j++) {
			printf("%2.f", resultado[i][j]);
		}
		printf("\n"); // Pular de linha o mudar de linha na matriz resultado
	}
	printf("\n"); // Pular linha
} // End if
else {
	printf("\n\n As matrizes dadas não são possíveis de serem multiplicadas.");
} // End else

  return 0;
} // Fim int main
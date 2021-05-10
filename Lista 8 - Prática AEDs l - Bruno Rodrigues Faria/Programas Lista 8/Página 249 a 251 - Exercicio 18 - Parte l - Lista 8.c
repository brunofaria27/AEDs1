#include <stdio.h>

int main() {
	float m[5][5];
	float soma = 0;
	int i, j;

  printf("Digite números para completar a matriz:\n");
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			scanf("%f", &m[i][j]);
		}
	}

	for (i = 1; i <= 5; i++){
		for (j = 1; j <= 5; j++){
			if (i + j == 6) 
				soma = soma + m[i][j];
		}
	}

	printf("A soma dos elementos da diagonal secundária é: %.2f.", soma);		

	return 0;
}
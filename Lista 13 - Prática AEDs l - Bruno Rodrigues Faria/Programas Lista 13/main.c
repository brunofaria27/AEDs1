#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int Menu();
void Maior(int x, int y, int z);
void Menor(int x, int y, int z);
void Intervalo(int x, int y, int z);
void TestaDivisao(int x, int y, int z);
void Raiz(int x, int y, int z);
void Exponencial(int x, int y, int z);

int main(void) {
  int x, y, z;
  float temp1 = 0.0, temp2 = 0.0, temp3 = 0.0;
  printf("Números de 1 a 10:\n");
  do {
    printf("Digite o número 1: ");
    scanf("%f", &temp1);
    x = (int)temp1;
  }while((temp1 < 1 || temp1 > 10) || (x - temp1) != 0);
  do {
    printf("Digite o número 2: ");
    scanf("%f", &temp2);
    y = (int)temp2;
  }while((temp2 < 1 || temp2 > 10) || (y - temp2) != 0);
  do {
    printf("Digite o número 3: ");
    scanf("%f", &temp3);
    z = (int)temp3;
  }while((temp3 < 1 || temp3 > 10) || (z - temp3) != 0);

  printf("Números digitados: %d, %d, %d\n\n", x, y, z);

  int menu = Menu();

  while(menu != 7) {
    switch(menu) {
    case 1:
      Maior(x, y, z);
      menu = Menu();
    break;
    case 2:
      Menor(x, y, z);
      menu = Menu();
    break;
    case 3:
      Intervalo(x, y, z);
      menu = Menu();
    break;
    case 4:
      TestaDivisao(x, y, z);
      menu = Menu();
    break;
    case 5:
      Raiz(x, y, z);
      menu = Menu();
    break;
    case 6:
      Exponencial(x, y, z);
      menu = Menu();
    break;
    }
  }

  printf("Obrigada por utilizar o programa.");

  return 0;
}

int Menu() {
  int escolha;
  printf("\nMENU ESCOLHA:\n");
  printf("1- Maior\n2- Menor\n3- Dentro do Intervalo\n");
  printf("4- Testa divisão\n5- Raiz quadrada\n6- Triplo da exponencial\n7- Sair\n");
  printf("Digite o que deseja: ");
  scanf("%d", &escolha);

  while(escolha > 7 || escolha < 1) {
    printf("A opção escolhida foi errada, insira novamente: ");
    scanf("%d", &escolha);
  }

  return escolha;
}

void Maior(int x, int y, int z) {
  int maior;

  if(x > y && x > z) {
    maior = x;
  } else if(y > x && y > z) {
    maior = y;
  } else if(z > y && z > x) {
    maior = z;
  }

  printf("\nOpção MAIOR\n");
  printf("O maior número é %d\n", maior);
}

void Menor(int x, int y, int z) {
  int menor = x;

  if(y < menor) {
    menor = y;
  } else if(z < menor) {
    menor = z;
  }

  printf("\nOpção MENOR\n");
  printf("O menor número é: %d\n", menor);
}

void Intervalo(int x, int y, int z) {
  printf("\nOpção INTERVALO\n");
  if((x < z && x > y) || (x < z && x > y)) {
    printf("X se encontra no intervalo [y,z]\n");
  } else {
    printf("X não se encontra no intervalo [y,z]\n");
  }
}

void TestaDivisao(int x, int y, int z) {
  printf("\nOpção TESTA DIVISÃO\n");
  if(x % y == 0) {
    printf("X é divisivel por Y\n");
  } else {
    printf("X não é divisivel por Y\n");
  }

  if(x % z == 0) {
    printf("X é divisivel por Z\n");
  } else {
    printf("X não é divisivel por Z\n");
  }
}

void Raiz(int x, int y, int z) {
  printf("\nOpção RAIZ QUADRADA\n");
  if(x % 2 == 0) {
    double valor1 = sqrt(x);
    printf("O valor da raiz quadrada de X é: %.2f\n", valor1);
  } else {
    double valor1 = pow(x, 2);
    printf("O valor de X elevado ao quadrado é: %.2f\n", valor1);
  }

  if(y % 2 == 0) {
    double valor2 = sqrt(y);
    printf("O valor da raiz quadrada de Y é: %.2f\n", valor2);
  } else {
    double valor2 = pow(y, 2);
    printf("O valor de Y elevado ao quadrado é: %.2f\n", valor2);
  }

  if(z % 2 == 0) {
    double valor3 = sqrt(z);
    printf("O valor da raiz quadrada de Z é: %.2f\n", valor3);
  } else {
    double valor3 = pow(z, 2);
    printf("O valor de Z elevado ao quadrado é: %.2f\n", valor3);
  }
}

void Exponencial(int x, int y, int z) {
  printf("\nOpção TRIPLO DA EXPONENCIAL\n");
  double dX = exp(x);
  printf("O triplo do valor da exponencial de X é: %.2f\n", 3 * dX);
  double dY = exp(y);
  printf("O triplo do valor da exponencial de Y é: %.2f\n", 3 * dY);
  double dZ = exp(z);
  printf("O triplo do valor da exponencial de X é: %.2f\n", 3 * dZ);
}
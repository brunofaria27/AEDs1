#include <stdio.h>
#include <math.h>

/*************************
** CÁLCULOS DO PROGRAMA ** 
*************************/

void calcularSoma (double a, double b) {
  double soma = 0;

  soma = a + b;
  printf("O resultado da soma é: %.2lf\n", soma);
} // End void Calcular Soma

void calcularSubtracao (double a, double b) {
  double subtracao = 0;

  subtracao = a - b;
  printf("O resultado da subtração é: %.2lf\n", subtracao);
} // End void calcular subtracao

void calcularMultiplicacao (double a, double b) {
  double multiplicacao = 0;

  multiplicacao = a * b;
  printf("O resultado da multiplicação é: %.2lf\n", multiplicacao);
} // End void calcular multiplicacao

void calcularDivisao (double a, double b) {
  double divisao = 0;

  divisao = a / b;
  printf("O resultado da divisão é: %.2lf\n", divisao);
} // End void calcular divisao

void calcularRaizQuadrada (double a) {
  double raiz = 0;

  raiz = sqrt(a);
  printf("O resultado da raiz quadrada é: %.2lf\n", raiz);
} // End void calcular raiz quadrada

void calcularPotencia (double a, double potencia) {
  double resposta = 0;

  resposta = pow(a, potencia);
  printf("O resultado da potenciação é: %.2lf\n", resposta);
} // End void calcular potencia

void calcularSeno (double a) {
  double seno = 0;

  seno = sin(a);
  printf("O seno de %.0lf é: %.2lf\n", a, seno);
} // End void calcular seno

void calcularCosseno (double a) {
  double cosseno = 0;

  cosseno = cos(a);
  printf("O cosseno de %.0lf é: %.2lf\n", a, cosseno);
} // End void calcular cosseno

void calcularHipotenusa (double a, double b) {
  double hipotenusa = 0;
  double resultado = 0;

  hipotenusa = pow(a, 2) + pow (b, 2);
  resultado = sqrt(hipotenusa);
  printf("O hipotenusa do triângulo retângulo é: %.2lf\n", resultado);
} // End void calcular hipotenusa

void calcularTangente (double a) {
  double tangente = 0;

  tangente = tan(a);
  printf("O tangente de %.0lf é: %.2lf\n", a, tangente);
} // End void calcular tangente

void calcularLogaritmo (double a) {
  double logaritmo = 0;
  double logaritmo10 = 0;

  logaritmo = log(a);
  printf("O logaritmo natural de %.0lf é: %.2lf\n", a, logaritmo);
  logaritmo10 = log10(a);
  printf("O logaritmo na base 10 de %.0lf é: %.2lf\n", a, logaritmo10);
} // End void calcular logaritmo

void calcularAreaRetangulo (double a, double b) {
  double area = 0;

  area = a * b;
  printf("A área do retângulo é: %.2lf\n", area);
} // End void calcular area de triangulo

void calcularAreaCircunferencia (double a) {
  double areac = 0;

  areac = 3.14 * pow(a, 2);
  printf("A área da circunferência é: %.2lf\n", areac);
} // End void calcular area circunferencia

void calcularFatorial (double a) {
  double fatorial = 1;

  for (fatorial = 1; a > 1; a--) {
    fatorial = fatorial * a;
  } // End for para calcular o fatorial  
  printf("O fatorial é: %.2lf\n", fatorial);
} // End void calcular fatorial

  /************************
  **** INÍCIO INT MAIN **** 
  ************************/
int main(void) {
  /************************
  **VÁRIAVEIS DO PROGRAMA** 
  ************************/
  int codigo;           // Leitura do código
  double  a = 0;        // Leitura de números para os cálculos (input)
  double  b = 0;        // Leitura de números para os cálculos (input)
  double  c = 0;        // Leitura de números para os cálculos (input)
  int potencia = 0;     // Leitura da potência 

  /************************
  **** MENU INTERATIVO ****
  ************************/
  printf("ESCOLHA O CÁLCULO QUE DESEJA EFETUAR\n");
  printf("CÓDIGO\t\tCÁLCULO A SER EFETUADO\n");
  printf("  1\t\t\t Soma\n");
  printf("  2\t\t\t Sobtração\n");
  printf("  3\t\t\t Multiplicação\n");
  printf("  4\t\t\t Divisão\n");
  printf("  5\t\t\t Raiz quadrada\n");
  printf("  6\t\t\t Potência\n");
  printf("  7\t\t\t Seno\n");
  printf("  8\t\t\t Cosseno\n");
  printf("  9\t\t\t Hipotenusa do triângulo retângulo\n");
  printf("  10\t\t Tangente\n");
  printf("  11\t\t Logaritmo\n");
  printf("  12\t\t Área de um retângulo\n");
  printf("  13\t\t Área de uma circunferência\n");
  printf("  14\t\t Fatorial\n");
  printf("_____________________________________________________\n\n"); // Divisoria
  
  /***************************************************
  **Leitura do código digitado dentro de um do-while**
  ***************************************************/
  do {
  printf("\nDigite o código do cálculo que deseja efetuar: ");
  scanf("%i", &codigo);
    switch (codigo) {
      case 0: // Finalizar o programa
      printf("o programa foi finalizado.");
      
      break;
      case 1: // Soma
      printf("Digite o primeiro número: ");
      scanf("%lf", &a);
      printf("Digite o segundo número: ");
      scanf("%lf", &b);
      
      calcularSoma (a, b); // Calcular a soma -> puxando o void criado
      
      break;
      case 2: // Subtração
      printf("Digite o primeiro número: ");
      scanf("%lf", &a);
      printf("Digite o segundo número: ");
      scanf("%lf", &b);
      
      calcularSubtracao (a, b); // Calcular a subtração -> puxando o void criado

      break;
      case 3: // Multiplicação
      printf("Digite o primeiro número: ");
      scanf("%lf", &a);
      printf("Digite o segundo número: ");
      scanf("%lf", &b);

      calcularMultiplicacao (a, b); // Calcular a multiplicacao -> puxando o void criado
      
      break;
      case 4: // Divisão
      printf("Digite o primeiro número: ");
      scanf("%lf", &a);
      printf("Digite o segundo número: ");
      scanf("%lf", &b);

      calcularDivisao (a, b); // Calcular a divisao -> puxando o void criado
      
      break;
      case 5: // Raiz Quadrada
      printf("Digite o número: ");
      scanf("%lf", &a);
      
      calcularRaizQuadrada (a); // Calcular a raiz quadrada -> puxando o void criado

      break;
      case 6: // Potência
      printf("Digite o número: ");
      scanf("%lf", &a);
      printf("Digite a potência: ");
      scanf("%i", &potencia);

      calcularPotencia (a, potencia); // Calcular a potenciacao -> puxando o void criado
      
      break;
      case 7: // Seno
      printf("Digite o número: ");
      scanf("%lf", &a);
      
      calcularSeno (a); // Calcular o seno -> puxando o void criado

      break;
      case 8: // Cosseno
      printf("Digite o número: ");
      scanf("%lf", &a);
      
      calcularCosseno (a); // Calcular o cosseno -> puxando o void criado

      break;
      case 9: // Hipotenusa do triângulo retângulo
      printf("Digite o cateto maior: ");
      scanf("%lf", &a);
      printf("Digite o cateto menor: ");
      scanf("%lf", &b);

      calcularHipotenusa (a, b); // Calcular a hipotenusa -> puxando o void criado
      
      break;
      case 10: // Tangente
      printf("Digite o número: ");
      scanf("%lf", &a);
      
      calcularTangente (a); // Calcular a tangente -> puxando o void criado

      break;
      case 11: // Logaritmo
      printf("Digite o número: ");
      scanf("%lf", &a);
      
      calcularLogaritmo (a); // Calcular o logaritmo -> puxando o void criado

      break;
      case 12: // Área de um retângulo
      printf("Digite a altura: ");
      scanf("%lf", &a);
      printf("Digite a base: ");
      scanf("%lf", &b);
      
      calcularAreaRetangulo (a, b); // Calcular area retangulo -> puxando o void criado

      break;
      case 13: // Área de uma circunferência
      printf("Digite o raio: ");
      scanf("%lf", &a);
      
      calcularAreaCircunferencia (a); // Calcular area circunferencia -> puxando o void criado

      break;
      case 14: // Fatorial
      printf("Digite o número: ");
      scanf("%lf", &a);
      
      calcularFatorial (a); // Calcular fatorial -> puxando o void criado

      break;
      default:
      printf("O código digitado é inválido.\n"); // Caso digita um código inexistente

    } // End switch case
  } while (codigo != 0); // End do while receber codigos 

  
  return 0;
} // End int main
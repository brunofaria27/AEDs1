#include <stdio.h>

int main(void) {
  double soma = 0;

  soma = 1/225 + 2/196 + 4/169 + 8/144 + 16/121 + 32/100 + 64/81 + 128/64 + 256/49 + 512/36 + 1024/25 + 2048/16 + 4096/9 + 8192/4 + 16384/1;

  printf ("Some: 1/225 + 2/196 + 4/169 + 8/144 + 16/121 + 32/100 + 64/81 + 128/64 + 256/49 +      512/36 + 1024/25 + 2048/16 + 4096/9 + 8192/4 + 16384/1 =\n\n");
  printf("A soma é: %.2lf", soma);
  return 0;
}
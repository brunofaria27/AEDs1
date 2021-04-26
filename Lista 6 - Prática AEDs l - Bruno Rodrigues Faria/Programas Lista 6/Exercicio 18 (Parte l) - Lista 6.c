#include <stdio.h>
#include <stdlib.h>

int eprimo () {
  int resposta;
  int n; 
  int k;
  int primo;

    for(n = 100; n <= 107; n++){

      primo = 0;
      
      for(k=1; k<=n; k++)
          
          if (n % k ==0) {
            primo++;
          }
          if (primo > 2) {
            printf("%d nao e primo\n", n);
          }
          else {
            printf("%d e primo\n", n);
          }
    }

  return n;
}

int main () {
  int resposta = 0;

  resposta = eprimo ();
  printf("%i", resposta);

  return 0;
}
#include<stdio.h> 
#include<math.h> 

int main() { 
   int i, j, k, sm=0, n[10], p=0, pr, r; 
   
   for ( i = 0; i < 10; i++) { 
      printf("Digite o %dº número: ", i + 1); 
      scanf("%d",&n[i]); 
   } 
   
   for (j = 0; j < 10; j++) { 
      if (n[j]%2 == 0) { 
         sm += n[j]; 
      } 
      pr = 0; 
      for (k=2; k<n[j]; k++) { 
         if (n[j]%k == 0) 
            pr++; 
      } 
      if (pr == 0) { 
         p += n[j]; 
      } 
   } 
   printf("A soma dos numeros pares e %i", sm); 
   printf("\n");
   printf("A soma dos numeros primos e %i", p); 
   
   return 0; 
}
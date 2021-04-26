#include "stdio.h"
#include "stdlib.h"

int main ()
{

int hora_extra = 0, hora_falta = 0, premio = 0, h = 0;

printf ("Digite o número de horas extras: ");
scanf ("%d", &hora_extra);
printf ("Digite o número de horas faltas: ");
scanf ("%d", &hora_falta);

h = (hora_extra) - (0.667 * hora_falta);

if (h >40){
  premio = 500;
}
else if (h >30 && h <= 40){
  premio = 400;
}
else if (h >20 && h <= 30){
  premio = 300;
}
else if (h >10 && h <= 20){
  premio = 200;
}
else {
  premio = 100;
}

printf("---------------------------------------------\n");
printf("O valor da gratificação é de %d reais\n\n", premio);

  return 0;
}
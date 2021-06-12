#include "vetor.h"
using namespace std;

int testaTamanhoVetor(Vetor *v) {
    return v->getTamanhoVetor();
}

int main (int argc, char *argv[]) {

 cout << "\n\nNovo vetor:";
 Vetor *v = new Vetor(); v->insereNoFinal(10);
 v->insereNoFinal(8);
 v->insereNoFinal(16);
 v->insereNoFinal(7);
 v->insereNoFinal(5); 
 v->insereNoFinal(13);
 v->insereNoFinal(25);
 v->insereNoFinal(22);
 v->insereNoFinal(8);
 v->imprime();
 cout << "\n";

 int pos = v->posicaoDe(8);
 if(pos != -1) {
     cout << "\nPosição: " << pos;
 } else {
     cout << "\nElemento não encontro\n";
 }

 v->alteraEm(3,19);
 v->alteraEm(15,9);
 
 int i;
 for (i = 0; i < v->obtemTamanho(); i++)
 cout << "\nElemento na posicao " << i << ": " << v->elementoEm(i); 
 
  cout << "\n\nSem reverter: ";
 v->imprime(); 
 cout << "\n\nReverte:";
 v->reverte();
 v->imprime(); 

 cout << "\n\nTamanho vetor: " << testaTamanhoVetor(v) << "\n";
 v->insereNoFinal(100);
 v->insereNoFinal(25);
 cout << "\nTamanho atualizado com 2 números a mais:";
 v->imprime(); 
 cout << "\nTamanho vetor: " << testaTamanhoVetor(v) << "\n";
 v->remove(8);
 v->remove(25);
 cout << "\nTamanho atualizado com números removidos:";
 v->imprime();
 cout << "\nTamanho vetor: " << testaTamanhoVetor(v) << "\n"; 
}
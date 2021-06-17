#include <cstdlib>
#include <string.h>
#include <iostream>
#include <ctime>

using namespace std;

/* CLASSES DO PROGRAMA */
class Ingressos {
    protected:
        int valor;
    public:
        Ingressos(int valor);
        int obtemValor();
        void imprimeValor();
        ~Ingressos();
};

class IngressoVIP : public Ingressos {
    protected: 
        int valorAdicional;
    public:
        IngressoVIP(int valorAdicional);
        void imprimeValorVIP(int valor);
        ~IngressoVIP();
};

class CamaroteSuperior : public IngressoVIP {
    private:
        int valorCamarote;
    public:
        CamaroteSuperior(int valorCamarote);
        void imprimeValorFinal(int valor, int valorAdicional);
        ~CamaroteSuperior();
};
/* END CLASSES DO PROGRAMA */

/* FUNÇÕES DO PROGRAMA */
Ingressos::Ingressos(int valor) {
    this->valor = valor;
}

int Ingressos::obtemValor() {
    return this->valor;
}

void Ingressos::imprimeValor() {
    cout << "O valor do ingresso normal e: " << valor << "\n";
}

Ingressos::~Ingressos() {
}
/* --------------------------------------------------------------------------------*/
IngressoVIP::IngressoVIP(int valorAdicional) : Ingressos(valor) {
    this->valorAdicional = valorAdicional;
}

void IngressoVIP::imprimeValorVIP(int valor) {
    cout << "Valor do ingresso VIP: " << valorAdicional + valor;
}

IngressoVIP::~IngressoVIP() {
}
/* --------------------------------------------------------------------------------*/
CamaroteSuperior::CamaroteSuperior(int valorCamarote) : IngressoVIP(valorAdicional) {
    this->valorCamarote = valorCamarote;
}

void CamaroteSuperior::imprimeValorFinal(int valor, int valorAdicional) {
    cout << "Valor do ingresso VIP no camarote superior e: " << valor + valorAdicional + valorCamarote;
}

CamaroteSuperior::~CamaroteSuperior() {
}
/* END FUNÇÕES DO PROGRAMA */
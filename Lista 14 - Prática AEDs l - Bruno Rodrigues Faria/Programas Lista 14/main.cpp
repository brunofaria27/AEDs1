#include "ingressos.h"

using namespace std;

int main() {
    int escolha;

    cout << "ESCOLHA DE INGRESSO" << "\n";
    cout << "1- Ingresso normal" << "\n";
    cout << "2- Ingresso VIP" << "\n";
    cout << "Digite o ingresso que deseja: ";
    cin >> escolha;

    while (escolha > 2 || escolha < 1) {
        cout << "Opcao invalida, insira novamente: ";
        cin >> escolha;
    }

    if(escolha == 1) {
        Ingressos *i = new Ingressos(10);
        cout << "\nVoce escolheu o ingresso normal" << "\n";
        i->imprimeValor();
        delete i;
    } else {
        IngressoVIP *vip = new IngressoVIP(25);
        cout << "\nVoce escolheu o ingresso VIP" << "\n";
        vip->imprimeValorVIP(10);

        int camarote;
        cout << "\n\nESCOLHA DE CAMAROTE" << "\n";
        cout << "1- Camarote superior (+R$150,00)" << "\n";
        cout << "2- Camarote inferior (+R$0,00)" << "\n";
        cout << "Digite o camarote que deseja: ";
        cin >> camarote;

        while (escolha > 2 || escolha < 1) {
            cout << "Opcao invalida, insira novamente: ";
            cin >> camarote;
        }

        if(camarote == 1) {
            CamaroteSuperior *VIPCamarote = new CamaroteSuperior(150);
            cout << "\nVoce escolheu o ingresso VIP no camarote superior" << "\n";
            VIPCamarote->imprimeValorFinal(10, 25);
            delete VIPCamarote;
        } else {
            cout << "\nVoce escolheu o ingresso VIP no camarote inferior" << "\n";
            vip->imprimeValorVIP(10);
            delete vip;
        }

    }

    return 0;
}
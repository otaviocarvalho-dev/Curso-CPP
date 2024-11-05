// POO, Classes, public, private, métodos (Parte 3)

#include <iostream>
#include "classes.h"

using namespace std;

int main()
{
    Veiculo *v1 = new Veiculo(2);
    Veiculo *v2 = new Veiculo(3);
    Veiculo *v3 = new Veiculo(1);

    v1->setligado(1);
    v2->setligado(1);
    v3->setligado(1);

    cout << v1->getvelMax() << endl;
    cout << v2->getvelMax() << endl;
    cout << v3->getvelMax() << endl;

    if (v1->getligado()){
        cout << "Veiculo 1 esta ligado!" << endl;
    }
    else if (v1->getligado()){
        cout << "Veiculo 1 esta desligado!" << endl;
    }

    if (v2->getligado()){
        cout << "Veiculo 2 esta ligado!" << endl;
    }
    else if (v2->getligado()){
        cout << "Veiculo 2 esta desligado!" << endl;
    }

    if (v3->getligado()){
        cout << "Veiculo 3 esta ligado!" << endl;
    }
    else if (v3->getligado()){
        cout << "Veiculo 3 esta desligado!" << endl;
    }

    return 0;
}

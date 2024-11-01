// Struct (Parte 1)

#include <iostream>
using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main()
{
    Carro car1, car2;

    car1.nome = "Tornado";
    car1.cor = "Vermelho";
    car1.pot = 450;
    car1.velMax = 350;

    cout << "Nome: " << car1.nome << "\n";
    cout << "Cor: " << car1.cor << "\n";
    cout << "Potencia: " << car1.pot << "\n";
    cout << "Velocidade Max.: " << car1.velMax << "\n";

    cout << "\n";

    car2.nome = "Furacao";
    car2.cor = "Azul";
    car2.pot = 420;
    car2.velMax = 310;

    cout << "Nome: " << car2.nome << "\n";
    cout << "Cor: " << car2.cor << "\n";
    cout << "Potencia: " << car2.pot << "\n";
    cout << "Velocidade Max.: " << car2.velMax << "\n";

    return 0;
}

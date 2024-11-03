// Struct (Parte 2)

#include <iostream>
using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int vel;
    int velMax;

    void insere(string stnome, string stcor, int stpot, int stvelAtual, int stvelMax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        vel = stvelAtual;
        velMax = stvelMax;
    }

    void mostra(){
        cout << "\nNome: " << nome << "\n";
        cout << "Cor: " << cor << "\n";
        cout << "Potencia: " << pot << "\n";
        cout << "Velocidade atual: " << vel << "\n";
        cout << "Velocidade Max.: " << velMax << "\n";
    }

    void mudaVel(int mv){
        vel = mv;
        if (vel > velMax){
            vel = velMax;
        }
        if (vel < 0){
            vel = 0;
        }
    }
};

int main()
{
    Carro car1, car2;

    car1.insere("Tornado", "Vermelho", 450, 156, 350);
    car2.insere("Furacao", "Azul", 420, 129, 310);

    car1.mostra();
    car2.mostra();

    return 0;
}

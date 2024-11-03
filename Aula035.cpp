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
    Carro *carros = new Carro[5];

    Carro car1, car2, car3, car4, car5;

    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;

    carros[0].insere("Tornado", "Prata", 450, 225, 400);
    carros[1].insere("Furacao", "Verde", 430, 215, 380);
    carros[2].insere("Tsunami", "Azul", 410, 205, 360);
    carros[3].insere("Krakatoa", "Preto", 390, 195, 340);
    carros[4].insere("Terremoto", "Vermelho", 370, 185, 320);

    for (int i = 0; i < 5; i++){
        carros[i].mostra();
    }

    return 0;
}

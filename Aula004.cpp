// Variáveis em C++

#include <iostream>

using namespace std;

int main()
{
    string nome = "desconhecido";
    int vidas = 0;
    double coins = 0.0;

    cout << "Digite o seu nome: ";
    cin >> nome;

    cout << "Digite o numero de vidas: ";
    cin >> vidas;

    cout << "Digite quantos coins o jogador tem: ";
    cin >> coins;

    cout << "\nNome: " << nome << "\nVidas: " << vidas << "\nCoins: " << coins;

    return 0;
}

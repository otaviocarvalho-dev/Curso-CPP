// Fila / Queue

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <string> cartas;
    int cont = 0;

    cartas.push("Rei de Paus");
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");

    if (cartas.empty()){
        cout << "Fila vazia!" << "\n";
    }
    else{
        cout << "Fila com cartas!" << "\n";
    }

    cout << "Tamanho da fila: " << cartas.size() << "\n";
    cout << "Primeira carta: " << cartas.front() << "\n";
    cout << "Ultima carta: " << cartas.back() << "\n";

    while (!cartas.empty()){
        cont++;
        cout << "Carta " << cont << ": " << cartas.front() << "\n";
        cartas.pop();
    }

    return 0;
}

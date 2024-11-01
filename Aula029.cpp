// Pilha / Stack (Parte 2)

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <string> cartas;

    cartas.push("Rei de Paus");
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");

    if (cartas.empty()){
        cout << "Pilha vazia!" << "\n";
    }
    else{
        cout << "Pilha com cartas!" << "\n";
    }

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    while (!cartas.empty()){
        cout << "Carta do topo: " << cartas.top() << "\n";
        cartas.pop();
    }

    return 0;
}

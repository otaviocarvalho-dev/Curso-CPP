// Pilha / Stack

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

    cout << "Carta do topo: " << cartas.top() << "\n";
    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cartas.pop();

    cout << "Nova carta do topo: " << cartas.top() << "\n";

    return 0;
}

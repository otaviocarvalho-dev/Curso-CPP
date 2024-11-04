// Ponteiros (Parte 1)

#include <iostream>
using namespace std;

int main()
{
    string veiculo = "Carro";
    string *pv;

    pv = &veiculo; // <<< Ponteiro "pv" recebe o endereço da variável "veiculo"

    cout << pv << "\n" << &veiculo;

    *pv = "Moto"; // <<< Valor do endereço apontado por "pv" alterado de "Carro" para "Moto"

    cout << "\n" << veiculo << "\n" << *pv;

    return 0;
}

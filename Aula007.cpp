// Incremento e decremento nas variáveis

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;

    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;

    cout << n1 << "\n"; // Mostrar variável antes da modificação
    n1 += 5; // Variável modificada
    cout << n1 << "\n"; // Mostrar variável após a modificação

    n2 = n2 + 1; // Soma 1, mas pode ser outro valor
    cout << n2 << "\n";

    n3 += 1; // "+= 1" soma 1, mas pode ser outro valor (código mais enxuto)
    cout << n3 << "\n";

    n4++; // "++" sempre soma 1
    cout << n4 << "\n";

    return 0;
}

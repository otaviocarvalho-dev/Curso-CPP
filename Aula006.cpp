// Variáveis globais e locais

#include <iostream>
using namespace std;

int num1, num2; // Variáveis globais
int res1 = 0;
int res2 = 0;

int main() // Variáveis locais
{
    // Operadores aritméticos:
    // Adição = +
    // Subtração = -
    // Multiplicação = *
    // Divisão = /
    // Resto da divisão = %

    int n1, n2;

    num1 = 11;
    num2 = 3;
    n1 = 5;
    n2 = 2;

    res1 = (num1 + num2 + n1 * n2) - 10;
    cout << "A soma de todas as variaveis subtraido por 10 = " << res1 << "\n";

    res2 = n1 % n2;
    cout << "O resto da divisao de " << n1 << " por " << n2 << " = " << res2 << "\n";

    return 0;
}

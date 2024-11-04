// Ponteiros (Parte 2)

#include <iostream>
using namespace std;

int main()
{
    int *p;
    int vetor[10];

    p = &vetor[0]; // <<< é igual a "p = vetor"
    *p = 10;
    cout << "\n" << vetor[0] << "\n";

    *(p += 1); // <<< incrementa +1 ao ponteiro "p"
    *p = 20;
    cout << "\n" << vetor[1] << "\n";

    *(p += 1); // <<< incrementa +1 ao ponteiro "p"
    *p = 30;
    cout << "\n" << vetor[2] << "\n";

    return 0;
}

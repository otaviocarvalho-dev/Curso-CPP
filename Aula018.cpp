// "Array" e "Vetor"

#include <iostream>
using namespace std;

int main()
{
    int tam = 7;
    int vetor[tam];
    int i;

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;
    vetor[5] = 60;
    vetor[6] = 70;

    for(i = 0; i < tam; i++)
        cout << vetor[i] << "\n";

    return 0;
}

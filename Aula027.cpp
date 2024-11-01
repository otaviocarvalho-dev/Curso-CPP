// Enum

#include <iostream>
using namespace std;

int main()
{
    enum armas{fuzil=120, pistola=20, rifle=6, escopeta=12};

    armas arma_selecionada; // << É como uma variável do tipo "armas"
    arma_selecionada = fuzil;
    cout << arma_selecionada; // << Imprime o valor 120

    return 0;
}

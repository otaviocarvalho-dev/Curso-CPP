// Omissão de argumentos e argumentos padrão

#include <iostream>
using namespace std;

void imp(string texto="");

int main()
{
    imp();

    return 0;
}

void imp(string texto){
    cout << texto << "\n";
}

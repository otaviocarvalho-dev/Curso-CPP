// Operadores lógicos "or", "and" e "not"

#include <iostream>
using namespace std;

int main()
{
    int num = 8;

    if(num > 4 and num < 7) // Se "num" for maior que 4 e menor que 7...
        cout << "Valor aceito!\n";
    else
        cout << "Valor recusado!\n";
    
    if(!num == 0 or num != 0) // <<< A mesma operação, mas escritas diferentemente
        cout << "Falso";
    else
        cout << "Verdadeiro";

    return 0;
}

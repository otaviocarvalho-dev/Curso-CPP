// Comandos de decisão "if" e "else"

#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    bool sol = false;

    if (sol) // <<< Se o teste for verdadeiro...
        cout << "Vou para a praia\n";
    else // <<< Se o teste for falso...
        cout << "Vou ficar em casa\n";
    
    if (num > 10)
        cout << num << " eh maior do que 10";
    else
        cout << num << " nao eh maior do que 10";

    return 0;
}

// Comando "while"

#include <iostream>
using namespace std;

int main()
{
    int n;

    n = 0;
    while(n < 10){
        cout << n << "\n";
        n++;
        if (n == 10)
            break;
    }

    cout << "Contagem finalizada!\n";

    return 0;
}

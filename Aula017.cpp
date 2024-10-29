// Comando "for"

#include <iostream>
using namespace std;

int main()
{
    int x, y;

    for(x = 0, y = 0; x < 20 and y < 20; x++, y += 2)
    {
        cout << x << " - " << y << "\n";
    }

    return 0;
}

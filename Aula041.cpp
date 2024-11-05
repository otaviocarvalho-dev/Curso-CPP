// "printf" e "cout"

#include <iostream>

using namespace std;

int main()
{
    int n = 15;
    float pi = 3.1415;

    cout << "Valor do numero em decimal: " << n << "\n";
    cout << "Valor do numero em hexadecimal: " << hex << n << "\n";

    cout.precision(3);
    cout << "Valor de pi: " << pi << "\n";

    cout.precision(-1);
    cout << "Valor de pi: " << pi << "\n";

    return 0;
}

// Sobrecarga de funções

#include <iostream>
using namespace std;

void soma(int n1, int n2);
void soma();

int main()
{
    soma();
    soma(20, 30);

    return 0;
}

void soma(int n1, int n2){
    int res;
    res = n1 + n2;
    cout << "Resultado de " << n1 << " + " << n2 << " = " << res << "\n";
}

void soma(){
    int n1, n2, res;
    n1 = 10;
    n2 = 20;
    res = n1 + n2;
    cout << "Resultado de " << n1 << " + " << n2 << " = " << res << "\n";
}

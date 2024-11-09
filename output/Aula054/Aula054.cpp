// Tratamento de erros com "try" e "catch"

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide(double n1, double n2);

int main()
{
    double num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    try{
        cout << divide(num1, num2);
    }
    catch(const char* msg){
        cout << msg << "\n";
    }

    return 0;
}

double divide(double n1, double n2){
    if (n2 == 0){
        throw "ERRO de divisao por zero!";
    }
    return n1 / n2;
}

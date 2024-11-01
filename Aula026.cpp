// Criando uma função "fatorial()" que calcule o fatorial de um número que o usuário escolher
// Criando uma função "fibonacci()" que calcule a sequência fibonacci do tamanho que o usuário escolher

#include <iostream>
using namespace std;

int fatorial(int n);
int fibonacci(int f);

int main()
{
    int num, res, fat;

    cout << "Fatorial de qual numero? ";
    cin >> num;
    res = fatorial(num);
    cout << "O fatorial de " << num << " = " << res << "\n";

    cout << "Digite quantos numeros para a sequencia Fibonacci: ";
    cin >> fat;
    for (int c = 0; c <= fat; c++){
        cout << fibonacci(c + 1) << " ";
    }

    return 0;
}

int fatorial(int n){
    if (n == 0){
        return 1;
    }
    else{
        return n * fatorial(n - 1);
    }
}

int fibonacci(int f){
        if (f == 1 or f == 2){
            return 1;
        }
        else{
            return fibonacci(f - 1) + fibonacci(f - 2);
        }
}

// Classes em C++ moderno

#include <iostream>
#include <memory>

using namespace std;

class Carro{
public:
    int velMax;
    int potencia;
    const char* nome;

    Carro(const char* n, int p):nome(n), potencia(p){
        this->nome = n;
        this->potencia = p;
        if (p < 100){
            this->velMax = 120;
        }
        else if (p < 200){
            this->velMax = 220;
        }
        else{
            this->velMax = 320;
        }
    }
};

int main()
{
    unique_ptr<Carro>c1(new Carro{"Camaro", 300});
    cout << c1->nome << " - " << c1->potencia << " - " << c1->velMax << "\n";

    return 0;
}

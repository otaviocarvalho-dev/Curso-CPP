// Inicialização uniforme

#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

class Veiculo{
public:
    int tipo;
    string nome;
};

int main()
{
    int vetor[]{1, 2, 3, 4, 5, 6, 7};
    vector<int>valores{1, 2, 3, 4, 5};
    map<string, string>capitais{{"MG", "Belo Horizonte"}};

    Pessoa p1{"Otavio", 19};
    Pessoa p2{"Gustavo", 24};

    Veiculo v1{1, "Camaro"};

    for (map<string, string>::iterator it = capitais.begin(); it != capitais.end(); it++){
        cout << it->first << " - " << it->second << "\n";
    }

    cout << vetor[6] << "\n";

    return 0;
}

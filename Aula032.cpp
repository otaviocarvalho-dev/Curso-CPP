// Lista (Parte 2)

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> aula, teste;
    int tam = 10;
    list<int>::iterator it;

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    for (int i = 0; i < tam; i++){
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);
    aula.erase(--it);

    aula.merge(teste);

    cout << "Tamanho da lista: " << aula.size() << "\n";

    tam = aula.size();
    for (int i = 0; i < tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    return 0;
}

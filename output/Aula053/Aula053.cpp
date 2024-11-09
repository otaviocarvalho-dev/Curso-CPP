#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string>produtos={"monitor", "teclado", "mouse", "gabinete", "cx_som"};
    vector<string>::iterator it;

    it = produtos.begin();

    for (it = produtos.begin(); it != produtos.end(); it++){
        cout << *it << "\n";
    }

    // "advance" = avança o número de índices designados na coleção
    // "next" = avança o número de casas designadas na coleção
    // "prev" = retorna o número de índices designados na coleção

    return 0;
}

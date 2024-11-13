// Dados em pares

#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    const int tam = 3;

    vector <pair <string, double>> prod;

    prod.push_back(make_pair("Mouse", 24.90));
    prod.push_back(make_pair("Teclado", 79.90));
    prod.push_back(make_pair("Monitor", 589.90));

    for (auto i:prod){
        cout << i.first << " - " << i.second << "\n";
    }

    return 0;
}

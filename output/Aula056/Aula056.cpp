// Classes de armazenamento (auto, register, static)

#include <iostream>
#include <vector>

using namespace std;

void somador(){
    static auto i = 0; // <<< "static" paraliza o valor de variáveis 
    i++;
    cout << i<< "\n";
}

int main()
{

    vector<int>v{10, 20, 30, 40, 50, 60, 70};

    for (register auto it = v.begin(); it != v.end(); it++){ // <<< "register" utiliza o registrador
        cout << *it << "\n";
    }

    return 0;
}

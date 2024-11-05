// Vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> n1;
    vector<int> n2;
    int tam1, tam2;

    n1.push_back(1);
    n1.push_back(2);
    n1.push_back(3);

    n2.push_back(4);
    n2.push_back(5);
    n2.push_back(6);

    tam1 = n1.size();
    tam2 = n2.size();

    cout << "Tamanho do vector 1: " << tam1 << endl;
    cout << "Tamanho do vector 2: " << tam2 << endl;

    for (int i = 0; i < tam1; i++){
        cout << n1[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < tam2; i++){
        cout << n2[i] << " ";
    }

    return 0;
}

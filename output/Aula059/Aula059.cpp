// Funções Lambda

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x1, x2, x3, x4;
    x1 = 10;
    x2 = 5;
    x3 = 2;
    x4 = 12;

    auto soma = [=]()->int{
        return x1 + x2 + x3 + x4;
    };

    auto maior = [](vector<int>n)->int{
        auto m = 0;
        for (int x:n){
            m = (m > x)?m:x;
        }
        return m;
    };

    cout << maior({2, 7, 8, 3, 1, 5, 9, 6, 4}) << "\n";
    cout << soma() << "\n";

    return 0;
}

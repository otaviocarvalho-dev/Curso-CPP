// Algoritmo "for_each"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>n{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator it;

    for_each(n.begin(), n.end(), [](int num){
        num *= 10;
        cout << num << "\n";
    });

    cout << "\n";

    for_each(n.begin(), n.end(), [](int num){
        cout << num << "\n";
    });

    return 0;
}

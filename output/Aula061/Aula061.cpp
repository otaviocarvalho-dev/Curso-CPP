// Map

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> prod;

    prod.insert(pair<int, string>(0, "Mouse"));
    prod.insert(pair<int, string>(1, "Teclado"));
    prod.insert(pair<int, string>(2, "Monitor"));

    for (auto it:prod){
        cout << it.first + 1 << " = " << it.second << "\n";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, media;
    string res;

    cout << "\nDigite a primeira nota: ";
    cin >> n1;
    cout << "\nDigite a segunda nota: ";
    cin >> n2;

    media = (n1 + n2) / 2;

    //(media >= 6) ? res = "Aprovado" : res = "Reprovado"; <<< forma de decisão usando "true" e "false"
    res = (media >= 6) ? "Aprovado" : "Reprovado"; // <<< forma mais simples de decisão usando "true" e "false"
    cout << "\nSituacao do aluno: " << res << "\n";

    return 0;
}

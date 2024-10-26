// Comandos de decisão "if" e "else"; e o comando "Go to"

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, med;
    string res;

    inicial:
    system("cls");

    cout << "Digite o valor da nota 1\n";
    cin >> n1;

    cout << "Digite o valor da nota 2\n";
    cin >> n2;

    med = (n1 + n2) / 2;
    // Se a média do aluno for maior que 5 = aprovado
    // Se a média do aluno for entre 3 e 5 = recuperação
    // Se a média do aluno for menor que 2 = reprovado

    if(med > 5)
        cout << "Aluno aprovado!\n";
    else if(med > 2 and med < 6)
        cout << "Aluno de recuperacao!\n";
    else
        cout << "Aluno reprovado!\n";
    
    cout << "Analisar outro aluno? ";
    cin >> res;
    if (res == "S" or res == "s")
        goto inicial;

    return 0;
}

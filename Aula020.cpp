// Jogo do Forca

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    char palavra[27], letra[1], secreta[27];
    int tam, i, chances, letras_certas;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    letras_certas = 0;
    string jog1;
    string jog2;

    cout << "============================== JOGO DA FORCA ==============================\n";
    cout << "Jogador 1: escolhe a palavra secreta / Jogador 2: advinha a palavra secreta\n";

    cout << "\nDigite o nome do Jogador 1: ";
    cin >> jog1;
    cout << "\nDigite o nome do Jogador 2: ";
    cin >> jog2;

    cout << jog1 << ", por favor, digite a palavra secreta: ";
    cin >> palavra;
    system("cls");

    while (palavra[i] != '\0'){
        i++;
        tam++;
    }
    for (i = 0; i < 27; i++){
        secreta[i]='-';
    }

    while ((chances > 0) && (letras_certas < tam)){
        cout << "Chances restantes: " << chances << "\n";
        cout << "Palavra secreta: ";
        for (i = 0; i < tam; i++){
            cout << secreta[i];
        }
        cout << "\n";
        cout << jog2 << ", por favor, advinhe uma letra da palavra secreta: ";
        cin >> letra[0];
        for (i = 0; i < tam; i++){
            if (palavra[i] == letra[0]){
                acerto = true;
                secreta[i]=palavra[i];
                letras_certas++;
            }
        }

        if (!acerto){
            cout << "ERROU!\n";
            chances--;
        }
        acerto = false;
        system("cls");
    }
    cout << "\n";
    if (letras_certas == tam){
        cout << jog2 << " venceu!\n";
    }
    else{
        cout << jog1 << " venceu!\n";
        cout << "A palavra secreta era " << palavra;
    }

    cout << "\n";
    system("pause");
    return 0;
}

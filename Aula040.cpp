// "printf" e "scanf"

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int ano;
    string nome;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("\nAno de nascimento: ");
    scanf("%d", &ano);

    printf("\nNome do usuario: %s - Ano de nascimento do usuario: %d", nome, ano);

    return 0;
}

// "d" ou "i" = int
// "x" ou "X"
// "u" = int sem sinal
// "s" = string, char*
// "f" = double
// "p" = ponteiro

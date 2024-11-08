// Alocação dinâmica de memória

#include <iostream>
#include <stdio.h> // <<< Para função "gets"
#include <stdlib.h> // <<< Para funçaõ "malloc"

using namespace std;

int main()
{
    char *vnome;
    vnome = (char *) malloc(sizeof(char));

    gets(vnome);

    cout << vnome;

    return 0;
}

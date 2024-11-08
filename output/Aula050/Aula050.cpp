// Operações em arquivos "ofstream"

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream = entrada no arquivo
    // ifstream = saída no arquivo
    // fstream = entrada e saída no arquivo

    ofstream arquivo;

    arquivo.open("cfbcursos.txt", ios::app);

    arquivo << "cfbcursos.com.br\n";

    arquivo.close();

    return 0;
}

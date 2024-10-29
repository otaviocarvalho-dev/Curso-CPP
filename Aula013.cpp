// Comando "switch case"

#include <iostream>
using namespace std;

int main()
{
    int cor;
    int tipo_transporte;
    int terrestres;
    int aereos;

    cout << "Selecione uma cor: \n";
    cout << "[1] = Vermelho, [2] = Verde, [3] = Azul\n";
    cin >> cor;

    switch (cor)
    {
        case 1:
            cout << "Cor selecionada: Vermelho\n";
            break;
        case 2:
            cout << "Cor selecionada: Verde\n";
            break;
        case 3:
            cout << "Cor selecionada: Azul\n";
            break;
        default:
            cout << "Opcao invalida!\n";
            break;
    }

    cout << "Selecione o tipo de transporte: \n";
    cout << "[1] = Terrestre, [2] = Aereo\n";
    cin >> tipo_transporte;

    switch (tipo_transporte)
    {
        case 1:
            cout << "Selecione o transporte terrestre a viajar: \n";
            cout << "[1] = Carro, [2] = Moto\n";
            cin >> terrestres;
    
            switch (terrestres)
            {
                case 1:
                    cout << "Voce escolheu viajar de Carro (opcao 1)\n";
                    break;
                case 2:
                    cout << "Voce escolheu viajar de Moto (opcao 2)\n";
                    break;
                default:
                    cout << "Opcao invalida!\n";
                    break;
            }
            break;
    
        case 2:
            cout << "Selecione o transporte aereo a viajar: \n";
            cout << "[1] = Aviao, [2] = Helicoptero\n";
            cin >> aereos;
            
            switch (aereos)
            {
                case 1:
                    cout << "Voce escolheu viajar de Aviao (opcao 1)\n";
                    break;
                case 2:
                    cout << "Voce escolheu viajar de Helicoptero (opcao 2)\n";
                    break;
                default:
                    cout << "Opcao invalida!\n";
                    break;
            }
            break;
    
        default:
            cout << "Opcao invalida!\n";
            break;
    }

    return 0;
}

#include <iostream>
#include <string>
#include <stdio.h>

//18170 -> Gustavo & Chris <- 18192
using namespace std;

int main()
{

    while(1 == 1)
    {
        int str;
        cout << "Bem-Vindo a Calculadora de Bases" << endl;
        cout << "1-Soma             2-Subtracao" << endl;
        cout << "3-Multiplicacao    4-Divisao" << endl;
        cout << "5-Sair" << endl;
        cin >> str;
        cout << "Opcao Desejada:" << str << std::endl;
        switch(str)
        {
        case 1:
            {
                cout << "Digite o Primeiro Numero a ser somado:" << endl;
                int numero1;
                cin >> numero1;
                cout << "Digite o Segundo Numero a ser somado:" << endl;
                int numero2;
                cin >> numero2;
                cout << "Digite a base dos numeros:" << endl;
                int base;
                cin >> base;

                //Somador.Soma(numero1,numero2,base)
            }
        break;

        case 2:
            {
                cout << "Digite o Numero a ser subtraido:" << endl;
                int numero1;
                cin >> numero1;
                cout << "Digite o Numero que vai subtrair:" << endl;
                int numero2;
                cin >> numero2;
                cout << "Digite a base dos numeros:" << endl;
                int base;
                cin >> base;

                //Subtrador.Sub(numero1,numero2,base)
            }

        break;

        case 3:
            {
                cout << "Digite o Primeiro Numero a ser multiplicado:" << endl;
                int numero1;
                cin >> numero1;
                cout << "Digite o Segundo Numero a ser multiplicado:" << endl;
                int numero2;
                cin >> numero2;
                cout << "Digite a base dos numeros:" << endl;
                int base;
                cin >> base;

                //Multiplicador.Mult(numero1,numero2,base)
            }

        break;

        case 4:
            {
                cout << "Digite o divedendo:" << endl;
                int numero1;
                cin >> numero1;
                cout << "Digite o divisor:" << endl;
                int numero2;
                cin >> numero2;
                cout << "Digite a base dos numeros:" << endl;
                int base;
                cin >> base;
                //Divisor.Div(numero1,numero2,base)
            }

            break;

        case 5:
            return 0;

        }

    }
    return 0;
}

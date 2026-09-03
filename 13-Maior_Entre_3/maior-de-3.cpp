#include <iostream>
#include <windows.h>
#include <algorithm>

using namespace std;


void maiorTres(int num1, int num2, int num3){

    //Apenas um número é maior
    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " é o maior número" << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " é o maior número" << endl;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << num3 << " é o maior número" << endl;
    }
    //Todos os números são iguais
    else if (num1 == num2 && num2 == num3)
    {
        cout << "Todos os números são iguais" << endl;
    }
    //Dois ou números são iguais
    else
    {
        int maior = max({num1, num2, num3});
        cout << "Há um empate! O número maior é " << maior << endl; 
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    bool repet = true;

    while (repet == true)
    { 
        int n1, n2, n3 = 0;

        cout << "Informe n1: ";
        cin >> n1;

        cout << "Informe n2: ";
        cin >> n2;

        cout << "Informe n3: ";
        cin >> n3;

        maiorTres(n1, n2, n3);

        char sn;
        cout << "\nDeseja repetir? (s/n) " << endl;
        cin >> sn;

        if (tolower(sn) == 's')
        {
            repet = true;
        }
        else if (tolower(sn) == 'n')
        {
            repet = false;
        }
        else
        {
            cout << "Resposta inválida. Encerrando..." << endl;
            repet = false;
        }

    }

    return 0;
}
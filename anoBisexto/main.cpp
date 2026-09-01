#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    
    int ano;
    cout << "Insira o ano desejado" << endl;
    cin >> ano;
    if (ano % 100 == 0)
    {
        if (ano % 400 == 0)
        {
            cout << "Ano bissexto" << endl;
        }
        else{
            cout << "Ano não bissexto" << endl;
        }
        
    }
    else if (ano % 4 == 0)
    {
        cout << "Ano bissexto" << endl;
    }
    else{
        cout << "Ano não bissexto" << endl;
    }
    
    


    return 0;
}
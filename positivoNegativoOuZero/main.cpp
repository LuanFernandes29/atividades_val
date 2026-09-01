#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8"); 
    
    int numero = 0;
    cout << "Digite um numero para verificação" << endl;
    cin >> numero;
    if(numero == 0){
        cout << "O numero: " << numero << " é zero"<< endl;
    }
    else if (numero % 2 == 0) {
        cout << "O numero: " << numero << " é positivo"<< endl;
    } else  {
        cout << "O numero: " << numero << " é negativo"<< endl;
    }
    
    return 0;
}
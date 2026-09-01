#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    float altura = 0;
    float calculo = 0;
    float peso = 0;
    cout << "Insira sua altura em metros" << endl;
    cin >> altura;
    cout << "Insira seu peso em KG" << endl;
    cin >> peso;
    calculo = peso/(altura * altura);
    if(calculo < 18.5){
        cout << "Abaixo do peso" << endl;
    }
    else if(calculo <= 24.9){
        cout << "Peso Adequado" << endl;
    }
    else if(calculo <= 29.9){
        cout << "Sobrepeso" << endl;
    }
    else if(calculo <= 34.9){
        cout << "Obesidade grau 1" << endl;
    }
    else if(calculo <= 39.9){
        cout << "Obesidade grau 2" << endl;
    }
    else{
        cout << "Obesidade grau 3" << endl;
    }

    
    return 0;
}
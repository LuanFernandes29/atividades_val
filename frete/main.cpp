#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    
    float valorCompra;
    float distanciaEntrega;
    float valorFrete;
    cout << "Insira o valor da compra em reais" << endl;
    cin >> valorCompra;
    cout << "Insira a distancia da entrega em KM" << endl;
    cin >> distanciaEntrega;
    valorFrete = 5 + (distanciaEntrega * 0.20) + (valorCompra * 0.01);

    cout << "O valor de frete da compra sera de: " << valorFrete << endl;

    return 0;
}
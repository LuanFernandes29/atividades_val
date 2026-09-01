#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    float horas;
    float valorEstacionamento;
    cout << "Insira a quantidade de horas que deseja" << endl;
    cin >> horas;
    valorEstacionamento = 10 + (horas * 5);

    cout << "O valor do estacionamento vai ser de: " << valorEstacionamento << endl;

    
    
    return 0;
}
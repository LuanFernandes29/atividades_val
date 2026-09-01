#include <iostream>

using namespace std;

int main() {
    float potenciaWatts, horasPorDia, dias;
    
    cout << "Digite a potencia do aparelho em Watts (W): ";
    cin >> potenciaWatts;
    cout << "Digite o tempo de uso diario em horas (h): ";
    cin >> horasPorDia;
    cout << "Digite a quantidade de dias: ";
    cin >> dias;

    float consumoKWh = (potenciaWatts * horasPorDia * dias) / 1000.0;
    
    cout << "O consumo total e: " << consumoKWh << " kWh" << endl;
    
    return 0;
}
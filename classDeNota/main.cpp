#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    
    //A: 9,0 a 10 (Excelente)B: 8,0 a 8,9 (Bom)C: 7,0 a 7,9 (Regular)D: 5,0 a 6,9 (Insuficiente)E: Abaixo de 5,0 (Reprovado)
    float nota;
    cout << "Insira sua nota para conversão" << endl;
    cin >> nota;
    if (nota >= 9 & nota < 10)
    {
        cout << "Sua nota é A" << endl;
    }
    else if (nota >= 8 & nota < 9)
    {
        cout << "Sua nota é B" << endl;
    }
    else if (nota >= 7 & nota < 8)
    {
        cout << "Sua nota é C" << endl;
    }
    else if (nota >= 5 & nota < 7)
    {
        cout << "Sua nota é D" << endl;
    }
    else if (nota < 5 & nota > 0)
    {
        cout << "Sua nota é E" << endl;
    }
    else{
        cout << "Sua nota esta fora da margem de notas" << endl;
    }
    


    return 0;
}
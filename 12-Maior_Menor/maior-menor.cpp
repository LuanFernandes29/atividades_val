#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double n1, n2;

    cout << "Informe o primeiro número: ";
    cin >> n1;

    cout << "Informe o segundo número: ";
    cin >> n2;

    if (n1<n2){
        cout << n2 << " é maior";
    }
    else if (n2<n1){
        cout << n1 << " é maior";
    }
    else if (n1-n2 == 0){
        cout << "Os números são iguais";
    }

    cin.ignore();
    getchar();
    return 0;
}
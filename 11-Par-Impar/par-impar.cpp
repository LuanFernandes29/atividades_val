#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n;


    cout << "Digite um número: ";
    cin >> n;

    if (n % 2 == 0){
        cout << "Par";
    }
    else{
        cout << "Ímpar";
    }

    cin.ignore();
    getchar();
    return 0;
}
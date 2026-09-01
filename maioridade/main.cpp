#include <iostream>
#include <clocale>

using namespace std;

main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    
    int idade;
    cout << "Insira sua idade" << endl;
    cin >> idade;
    if (idade < 18) {
        cout << "Você não é de maior" << endl;
    } else{
        cout << "Você é de maior" << endl;
    }
    return 0;
}
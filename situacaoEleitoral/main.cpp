#include <iostream>
#include <clocale>

using namespace std;

main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    
    int idade;
    cout << "Insira sua idade" << endl;
    cin >> idade;
    if (idade < 18) {
        cout << "Você não pode votar" << endl;
    } else if (idade < 70){
        cout << "Você pode votar" << endl;
    }
    else{
        cout << "Você não precisa votar" << endl;
    }
    return 0;
}
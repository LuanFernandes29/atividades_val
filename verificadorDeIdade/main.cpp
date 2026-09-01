#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    
    int idade;
    cout << "Insira sua idade" << endl;
    cin >> idade;
    if (idade <= 10) {
        cout << "Você é uma criança" << endl;
    } else if(idade < 18){
        cout << "Você é um adolescente" << endl;
    }
      else if(idade < 60){
        cout << "Você é um Adulto" << endl;
    }
     else{
        cout << "Você é um Idoso" << endl;
    }
    
    return 0;
}
#include <iostream>
#include <clocale>
using namespace std;

main(){
    setlocale(LC_ALL, "en_US.UTF-8"); 
    float nota1 = 0;
    float nota2 = 0    ;
    float media = 0;
    int mediaNecessaria = 0 ;
    cout << "Digite as notas do aluno: "  << endl;
    cin >> nota1;
    cin >> nota2;
    cout << "Digite a media necessaria para passar:" << endl;
    cin >> mediaNecessaria;
    media = (nota1 + nota2)/2;
    if(media >= mediaNecessaria){
        cout << "Você passou com a média: " << media << endl;
    }
    else {
        cout << "Você reprovou com a média: " << media << endl;
    }


}

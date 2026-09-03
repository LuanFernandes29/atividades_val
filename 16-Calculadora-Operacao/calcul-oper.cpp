#include <iostream>
#include <windows.h>

using namespace std;

//Funções dos operadores
void soma(double num1, double num2){
    double total = num1 + num2;

    cout << "= " << total;
}
void sub(double num1, double num2){
    double total = num1 - num2;

    cout << "= " << total;
}
void multi(double num1, double num2){
    double total = num1 * num2;

    cout << "= " << total;
}
void div(double num1, double num2){
    if (num2 == 0)
    {
        cout << "Não é possivel dividir por 0!" << endl;
    }
    else
    {
        double total = num1 / num2;
        cout << "= " << total;
    }

    
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double n1, n2= 0.00;
    char oper;
    bool repeat = true;

    cout << "CALCULADORA:" << "\nInsira o primeiro número, em seguida o operador e então o segudno número.\nSegue o exemplo: 1+1 [ENTER]" << endl;
    
    //Laço de repetição, para evitar ter que executar o código diversas vezes
    while (repeat == true)
    {
        //Entrada de dados
        cin >> n1 >> oper >> n2;

        //Avalia o operador escolhido pelo usuário
        switch (oper){
            case '+':
                soma(n1, n2);
                break;
            case '-':
                sub(n1, n2);
                break;
            case '*':
                multi(n1, n2);
                break;
            case '/':
                div(n1, n2);
                break;
            default:
                cout << "Inválido!" << endl;
                break;
        }

        //Pergunta ao usuário se ele deseja realizar outra operação
        char sn;
        cout << "\nDeseja repetir? (s/n) " << endl;
        cin >> sn;

        if (tolower(sn) == 's')
        {
            repeat = true;
        }
        else if (tolower(sn) == 'n')
        {
            repeat = false;
        }
        else
        {
            cout << "Resposta inválida. Encerrando..." << endl;
            repeat = false;
        }
    }
    return 0;
}
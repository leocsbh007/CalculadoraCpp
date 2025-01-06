#include <iostream>
#include <locale>

using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    double numero1, numero2, resultado;
    char operador;
    
    cout << "Bem-Vindo à nossa Calculadora Básica\n";
    cout << "Digite dois números e a operação desejada (+, -, *, /).\n";

    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o operador (+ , -, *, /)";
    cin >> operador;
    cout << "Digite o segundo número: ";    
    cin >> numero2;

    if (operador == '+'){
        resultado = numero1 + numero2;
    }
    else if (operador == '-'){
        resultado = numero1 - numero2;
    }
    else if (operador == '*'){
        resultado = numero1 * numero2;
    }
    else if (operador == '/')
    {
        if (numero2 != 0){
            resultado = numero1 / numero2;
        }
        else{
            cout << "ERRO: divisão por zero não é permitida.\n";
            return 1;
        }        
    }
    else{
        cout << "ERRO: operador inválido.\n";
        return 1;
    }   
    cout << "Resultado: " << numero1 << " " << operador << " " << numero2 << " = " << resultado;  
    return 0;
}
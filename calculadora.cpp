#include <iostream>
#include <locale>

using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    double numero1, numero2, resultado;
    char operador;
    
    cout << "Bem-Vindo � nossa Calculadora B�sica\n";
    cout << "Digite dois n�meros e a opera��o desejada (+, -, *, /).\n";

    cout << "Digite o primeiro n�mero: ";
    cin >> numero1;
    cout << "Digite o operador (+ , -, *, /)";
    cin >> operador;
    cout << "Digite o segundo n�mero: ";    
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
            cout << "ERRO: divis�o por zero n�o � permitida.\n";
            return 1;
        }        
    }
    else{
        cout << "ERRO: operador inv�lido.\n";
        return 1;
    }   
    cout << "Resultado: " << numero1 << " " << operador << " " << numero2 << " = " << resultado;  
    return 0;
}
#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    double numero1, numero2, resultado;
    
    cout << "Bem-Vindo à nossa Calculadora Básica\n";
    cout << "Nossa Calculadora só sabe fazer ADIÇÃO.\n";

    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;

    resultado = numero1 + numero2;

    cout << "Resultado: " << numero1 << " " << "+ " << numero2 << " = " << resultado;
     

    return 0;
}
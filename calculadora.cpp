#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    double numero1, numero2, resultado;
    
    cout << "Bem-Vindo � nossa Calculadora B�sica\n";
    cout << "Nossa Calculadora s� sabe fazer ADI��O.\n";

    cout << "Digite o primeiro n�mero: ";
    cin >> numero1;
    cout << "Digite o segundo n�mero: ";
    cin >> numero2;

    resultado = numero1 + numero2;

    cout << "Resultado: " << numero1 << " " << "+ " << numero2 << " = " << resultado;
     

    return 0;
}
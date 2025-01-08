#include <iostream>
#include <locale>

using namespace std;

void menu();
int soma(int a, int b);
int subtracao(int a, int b);
int multiplicacao(int a, int b);
float divisao(int a, int b);

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int opcao, num1, num2;
    do{
        menu();
        cin >> opcao;
        if (opcao >= 1 && opcao <=4){
            cout << "Digite dois numeros: \n";
            cin >> num1 >> num2;
        }
        switch(opcao){
            case 1:
                cout << "Resultado: " << soma(num1, num2) << endl;
                break;
            case 2: 
                cout << "Resultado: " << subtracao(num1, num2) << endl;
                break;
            case 3: 
                cout << "Resultado: " << multiplicacao(num1, num2) << endl;
                break;
            case 4:
                if (num2 != 0){
                    cout << "Resultado: " << divisao(num1, num2) << endl;
                    break;
                }
                cout << "Erro: Divis�o por zero!\n";
                break;                
            case 5: 
                cout << "Encerrando o programa.\n";
                break;                
            default:
                cout << "Op��o Invalida!!!\n";
                cout << "O programa ser� encerrado.\n";
                opcao = 5;                
        }
    }while (opcao != 5);        
    return 0;
}

void menu(){
    cout << "\nCalculadora Modular\n";
    cout << "1. Soma\n";
    cout << "2. Subtra��o\n";
    cout << "3. Multiplica��o\n";
    cout << "4. Divis�o\n";
    cout << "5. Sair\n";
    cout << "Escolha uma op��o: ";
}

int soma(int a, int b){
    return a + b;
}

int subtracao(int a, int b){
    return a - b;
}

int multiplicacao(int a, int b){
    return a * b;
}
float divisao(int a, int b){
    return (float)a / b;    
}
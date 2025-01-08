#include <iostream>
#include <string>
#include <cstdlib>      // Para usar a fun��o exit()
#include <stdexcept>    // Para std::invalide argumento
#include <locale>

using namespace std;

void menu(){
    cout << "\n========Calculadora Completa========\n";
    cout << "1. Soma\n";
    cout << "2. Subtra��o\n";
    cout << "3. Multiplica��o\n";
    cout << "4. Divis�o\n";
    cout << "5. Sair\n";
    cout << "Escolha uma op��o: ";
    cout << "\n====================================\n";
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

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    string escolha;
    do
    {
        //Exibe o Menu
        menu();
        // Pega qual foi a escolha do usu�rio
        string escolha;
        getline(cin, escolha);

        // Verifica se a escolha � v�lida
        if (escolha == "5") {
            cout << "Encerrando a calculadora. At� logo!" << endl;
            break; // Sai do loop
        }
        // Captura a express�o do usu�rio
        cout << "Digite a express�o (ex: 3 + 5): ";
        string expressao;
        getline(cin, expressao);

        // Identifica o operador
        size_t pos;
        char operador;
        if((pos = expressao.find('+')) != string::npos){
            operador = '+';
        } else if ((pos = expressao.find('-')) != string::npos) {
            operador = '-';
        } else if ((pos = expressao.find('*')) != string::npos) {
            operador = '*';
        } else if ((pos = expressao.find('/')) != string::npos) {
            operador = '/';
        } else {
            cout << "Erro: Operador inv�lido!" << endl;
            cout << "O programa ser� encerrado.\n";
            break; // Retorna ao in�cio do loop
        }

        // separa os numeros da express�o
        string num1 = expressao.substr(0, pos);
        string num2 = expressao.substr(pos+1);

        //Converte os numeros de string para inteiro
        int numero1, numero2;
        try
        {
            numero1 = stoi(num1);
            numero2 = stoi(num2);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Erro ao converter para inteiro!!!"<< "\nFun��o " << e.what() << '\n';
            cout << "O programa ser� encerrado.\n";
            break;
        }
        
        

        // Realiza o c�lculo com base na escolha do usu�rio
        switch (operador) {
            case '+':
                cout << "Resultado: " << soma(numero1, numero2) << endl;
                break;
            case '-':
                cout << "Resultado: " << subtracao(numero1, numero2) << endl;
                break;
            case '*':
                cout << "Resultado: " << multiplicacao(numero1, numero2) << endl;
                break;
            case '/':
                if (numero2 != 0){
                    cout << "Resultado: " << divisao(numero1, numero2) << endl;
                    break;
                }
                cout << "Erro: Divis�o por zero!\n";
                break;  
            default:
                cout << "ERRO: Op��o Invalida!!!\n";
                cout << "O programa ser� encerrado.\n";
                break;
        }

    }while (escolha != "5");
    
    
    
    return 0;
}

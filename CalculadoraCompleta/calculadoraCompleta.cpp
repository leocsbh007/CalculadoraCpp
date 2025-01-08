#include <iostream>
#include <string>
#include <cstdlib>      // Para usar a função exit()
#include <stdexcept>    // Para std::invalide argumento
#include <locale>

using namespace std;

void menu(){
    cout << "\n========Calculadora Completa========\n";
    cout << "1. Soma\n";
    cout << "2. Subtração\n";
    cout << "3. Multiplicação\n";
    cout << "4. Divisão\n";
    cout << "5. Sair\n";
    cout << "Escolha uma opção: ";
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
        // Pega qual foi a escolha do usuário
        string escolha;
        getline(cin, escolha);

        // Verifica se a escolha é válida
        if (escolha == "5") {
            cout << "Encerrando a calculadora. Até logo!" << endl;
            break; // Sai do loop
        }
        // Captura a expressão do usuário
        cout << "Digite a expressão (ex: 3 + 5): ";
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
            cout << "Erro: Operador inválido!" << endl;
            cout << "O programa será encerrado.\n";
            break; // Retorna ao início do loop
        }

        // separa os numeros da expressão
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
            std::cerr << "Erro ao converter para inteiro!!!"<< "\nFunção " << e.what() << '\n';
            cout << "O programa será encerrado.\n";
            break;
        }
        
        

        // Realiza o cálculo com base na escolha do usuário
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
                cout << "Erro: Divisão por zero!\n";
                break;  
            default:
                cout << "ERRO: Opção Invalida!!!\n";
                cout << "O programa será encerrado.\n";
                break;
        }

    }while (escolha != "5");
    
    
    
    return 0;
}

#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    string frase = "Olá, mundo!";
    size_t pos = frase.find("bola");
    if (pos != string::npos){
        cout << "Palavra encontrada na posição: " << pos << endl;
    }else{
        cout << "Palavra não encontrada" << endl;
    }


    return 0;
}
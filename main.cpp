#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    string frase = "Ol�, mundo!";
    size_t pos = frase.find("bola");
    if (pos != string::npos){
        cout << "Palavra encontrada na posi��o: " << pos << endl;
    }else{
        cout << "Palavra n�o encontrada" << endl;
    }


    return 0;
}
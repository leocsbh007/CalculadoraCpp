#include <iostream>
using namespace std;

int globalVar = 10;

void mostraGlobal(){
    cout << "Variavel global "<< globalVar << endl;
}

int main (){
    int localVar = 20;
    cout << "Variavel local " << localVar << endl;
    mostraGlobal();

    return 0;
}
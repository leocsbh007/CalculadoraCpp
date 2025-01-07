#include <iostream>
using namespace std;

int soma(int a, int b);

int main(){
    int x = 5, y = 7;
    int resultado = soma(x,y);

    cout << "A soma de " << x << " + " << y << " = " << resultado << endl;
    return 0;
}

int soma(int a, int b){
    return a + b;
}
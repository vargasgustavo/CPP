#include <iostream>
using namespace std;

int somaUm(int valor){
    valor += 1;
    return valor;
}

int main(){
    int valor = 10;
    cout << "Novo valor " << somaUm(valor) << endl;
}

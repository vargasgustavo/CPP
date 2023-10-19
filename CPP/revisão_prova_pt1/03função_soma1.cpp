#include <iostream>
using namespace std;

int somaUm(int valor){
    int soma;
    return soma = valor + 1;
}

int main(){
    int valor, res;
    cout << endl << "Digite um valor inteiro ";
    cin >> valor;
    res = somaUm(valor);
    cout << "O valor " << valor << " mais 1 resultou em " << res << endl;
}

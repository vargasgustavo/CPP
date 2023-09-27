#include <iostream>
using namespace std;

int elev(int valor){
    valor = valor * valor;
    return valor;
}

int main(){
    int res, valor = 5;
    res = elev(valor);
    cout << endl << "O numero " << valor << " elevado ao quadrado eh " << res << endl;
}

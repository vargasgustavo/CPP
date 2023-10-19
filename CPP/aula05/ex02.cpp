#include <iostream>
using namespace std;

void somaUm(int valor){
    valor += 1;
    cout << "Novo valor " << valor << endl;
}

int main(){
    int valor = 10;
    somaUm(valor);
    return 0;
}

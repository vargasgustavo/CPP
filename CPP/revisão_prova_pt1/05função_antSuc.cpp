#include <iostream>
using namespace std;

int antSuc(int valor, int *ant, int *suc){
    return *ant = valor - 1, *suc = valor + 1;
}

int main(){
    int valor, ant, suc;
    cout << "Digite um valor inteiro ";
    cin >> valor;
    antSuc(valor, &ant, &suc);
    cout << endl << "Seu antecessor " << ant << ", seu valor " << valor << ", seu sucessor " << suc << endl;
}

#include <iostream>
using namespace std;

void antesDepois(int valor, int *ant, int *suc){
    *ant = valor - 1;
    *suc = valor + 1;
}

int main(){
    int a, b, c;
    cout << "Digite um valor ";
    cin >> a;
    antesDepois(a, &b, &c);
    cout << "Valor digitado " << a << endl;
    cout << "Antecessor " << b << endl;
    cout << "Sucessor " << c << endl;
    return 0;
}

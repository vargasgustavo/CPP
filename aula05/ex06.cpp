#include <iostream>
using namespace std;

void metaDobro(int valor, int *met, int *dob){
    *met = valor / 2;
    *dob = valor * 2;
}

int main(){
    int a, b, c;
    cout << "Digite um valor ";
    cin >> a;
    metaDobro(a, &b, &c);
    cout << endl << "Valor digitado " << a << endl;
    cout << "Metade " << b << endl;
    cout << "Dobro " << c << endl;
    return 0;
}

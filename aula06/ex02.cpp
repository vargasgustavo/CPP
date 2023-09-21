#include <iostream>
using namespace std;

int elev(int nu){
    return nu * nu;
}

void elev2(int nu){
    cout << "O quadrado de " << nu << " = " << nu * nu << endl;
}

int main(){
    int num, n;
    cout << "Digite um valor inteiro ";
    cin >> num;
    n = elev(num);
    elev2(num);
    cout << "O numero eh " << n;
}

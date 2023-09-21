#include <iostream>
using namespace std;

float area(float b, float a){
    return (b * a) / 2;
}

int main(){
    float base, altura, res;
    cout << "Digite a base ";cin >> base;
    cout << "Digite a altura ";cin >> altura;
    res = area(base ,altura);
    cout << "A area do triangulo eh " << res << endl;
}

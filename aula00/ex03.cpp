#include <iostream>
using namespace std;

int main()
{
    float b, h, a;
    cout << "Programa para calcular a area de um triangulo\n\n";
    cout << "Digite a base: ";
    cin >> b;
    cout << "Digite a altura: ";
    cin >> h;
    a = b * h / 2;
    cout << "O triangulo de base " << b << " e altura " << h << " tem area " << a << endl;
    return 0;
}
#include <iostream>

#include "myLib.cpp"

using namespace std;

int main(){
    int ra;
    float n1, n2, media;
    string nome;

    cout << "Digite seu nome completo: "; cin >> nome;
    nome = readStr();
    cout << "Digite seu ra: "; cin >> ra;
    cout << "Nota de primeira prova: "; cin >> n1;
    cout << "Nota da segunda prova: "; cin >> n2;

    media = (float) (n1 + n2) / 2;

    cout << "Sua media eh " << media << endl;

    return 0;
}

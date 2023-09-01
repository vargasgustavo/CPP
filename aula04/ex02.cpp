#include <iostream>
#include "myLib.cpp"
using namespace std;

typedef struct{
    int ra;
    float n1, n2;
    string nome;
} typeFicha;

int main(){
    float media;
    typeFicha ficha;
    cout << "Cadastro de notas" << endl << endl;

    cout << "Digite seu nome completo: "; cin >> ficha.nome;
    ficha.nome = readStr();

    cout << "Digite seu ra: "; cin >> ficha.ra;

    cout << "Nota de primeira prova: "; cin >> ficha.n1;

    cout << "Nota da segunda prova: "; cin >> ficha.n2;

    media = (float) (ficha.n1 + ficha.n2) / 2;

    cout << "Sua media eh " << media << endl;

    return 0;
}

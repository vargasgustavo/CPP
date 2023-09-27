#include <iostream>
using namespace std;

typedef struct{
    float n1,
    n2,
    res,
    res2,
    sub;
    char n;
}variavel;

variavel notas;

float mediaNotas(float n1, float n2){
    return (n1 + n2) / 2;
}

float maior(float n1, float n2){
    if (n1 > n2)
    return n1;
    if (n1 < n2)
    return n2;
}

int main(){
    cout << endl << "PROGRAMA PARA MEDIA DE NOTAS:" << endl;

    cout << "Digite a primeira nota: ";
    cin >> notas.n1;

    cout << "Digite a segunda nota: ";
    cin >> notas.n2;

    notas.res = mediaNotas(notas.n1, notas.n2);

    if(notas.res >= 6){
        cout << "Aprovado com media " << notas.res << endl;
    }else{
    cout << "Reprovado com media " << notas.res << endl;
    cout << "Ficou de sub? (s / n) ";
    cin >> notas.n;
    }

    do{
    cout << "Digite a nota da sub: ";
    cin >> notas.sub;
        notas.res2 = maior(notas.n1, notas.n2);
        notas.res = mediaNotas(notas.res2, notas.sub);
    }while(notas.n == 's');
}

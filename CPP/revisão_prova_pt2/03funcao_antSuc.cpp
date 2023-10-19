#include <iostream>
using namespace std;

void antSuc(char letra, char *ant, char *suc){
    *ant = letra - 1;
    *suc = letra + 1;
}

int main(){
    char letra, ant, suc;
    cout << "Digite uma letra ";
    cin >> letra;
    antSuc(letra, &ant, &suc);
    cout << endl << ant << ", " << letra << ", " << suc << endl;
    cout << " ";
}

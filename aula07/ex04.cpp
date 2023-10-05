#include <iostream>
using namespace std;

int main(){
    int *vet;
    int i, tam;
    cout << "Digite o valor do vetor: ";cin >> tam;
    vet = new int(tam);
    for (i = 0; i < tam; i++){
        cout << "vetor: ";cin >> vet[i];
    }
}

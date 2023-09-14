#include <iostream>
using namespace std;

int main(){
    int vet[3];
    int i;
    for (i = 0; i < 3; i++){
        cout << "Digite um inteiro ";
        cin >> vet[i];
    }
    // Impressão
    for (i = 0; i < 3; i++){
        cout << vet[i];
    }

    return 0;

}

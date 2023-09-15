#include <iostream>
using namespace std;
#define VET 2

int main(){
    int vet[VET];
    int i, soma, menor, maior;
    float media;
    // Leitura
    for (i = 0; i < VET; i++){
        cout << "Digite um valor ";
        cin >> vet[i];
    }
    soma = 0; maior = vet[0]; menor = vet[0];
    for (i = 0; i < VET; i++){
        soma += vet[i];
        
        if (vet[i] > maior)
            maior = vet[i];
        if (vet[i] > menor)
            menor = vet[i];
    }
    
    media = soma / VET;

    cout << "Somatoria " << soma << endl;
    cout << "Maior " << maior << endl;
    cout << "Menor " << menor << endl;
    cout << "Media " << media << endl;

    return 0;

}

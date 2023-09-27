#include <iostream>
using namespace std;
#define VET 100

int main(){
    int i, vet[VET];
    int soma, maior, menor;
    float media;
    for(i=0; i < VET; i++){
        cout << "Digite um valor ";
        cin >> vet[i];
    }
    soma = 0, maior = vet[0], menor = vet[0];
    for(i=0; i < VET; i++){
        soma += vet[i];
        
        if(vet[i] > maior) maior = vet[i];
        if(vet[i] < menor) menor = vet[i];
    }

    media = (float)soma / VET;
    
    cout<<endl;
    cout << "Somatoria   "<<soma<<endl;
    cout << "Media       "<<media<<endl;
    cout << "Maior valor "<<maior<<endl;
    cout << "Menor valor "<<menor<<endl;
}

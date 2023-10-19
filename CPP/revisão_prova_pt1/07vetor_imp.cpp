#include <iostream>
using namespace std;
#define VET 3

int main(){
    int i, vet[VET];
    for(i=0; i < VET; i++){
        cout << "Digite um valor ";
        cin >> vet[i];
    }
    for(i=0; i < VET; i++){
        cout << vet[i];
    }
}

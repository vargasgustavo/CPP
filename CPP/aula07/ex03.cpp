#include <iostream>
using namespace std;

int main(){
    int vet[5] = {10, 20, 30, 40, 50};
    int i;
    int *p;
    p = vet;
    cout << "=======================" << endl;
    cout << "Vet[0] = " << vet[0] << endl;
    cout << "p[0] = " << p[0] << endl;
    for(i = 0; i < 5; i++){
        cout << "vetor[" << i << "] = " << *p << endl;
        p = p + 1;
    }
    cout << "Vet[0] = " << vet[0] << endl;
    cout << "p[0] = " << p[0] << endl;
    return 0;
}

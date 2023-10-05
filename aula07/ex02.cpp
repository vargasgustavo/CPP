#include <iostream>
using namespace std;

int main(){
    int vet[5] = {10, 20, 30, 40, 50};
    int i;
    int *p;
    p = vet;
    for(i = 0; i < 5; i++){
        cout << "vetor[" << i << "] = " << vet[i] << endl;
    }
    cout << "=======================" << endl;
    for(i = 0; i < 5; i++){
        cout << "vetor[" << i << "] = " << *(vet + i) << endl;
    }
    return 0;
}

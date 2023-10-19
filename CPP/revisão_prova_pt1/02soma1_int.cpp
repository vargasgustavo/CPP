#include <iostream>
using namespace std;

void somaUm(int num){
    int soma;
    soma = num + 1;
    cout << "O inteiro " << num << " somado com 1, resulta em " << soma << endl;
}

int main(){
    int num;
    cout << endl << "Digite um numero inteiro ";
    cin >> num;
    somaUm(num);
}

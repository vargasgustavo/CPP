#include <iostream>
using namespace std;

void numInt(int num){
    cout << endl << "O numero inteiro que digitou foi " << num << endl;
}

int main(){
    int num;
    cout << endl << "Digite um numero inteiro ";
    cin >> num;
    numInt(num);
}

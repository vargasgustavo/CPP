#include <iostream>
using namespace std;
#define NAME 3

int main(){
    string nome[NAME]; 
    int i;

    for (i = 0 ;i < NAME ; i++){
        cout << "Digite um nome: ";
        cin >> nome[i];
    }
    for (i = 0; i < NAME; i++){
        cout << nome[i] << endl;
    }
    return 0;
}

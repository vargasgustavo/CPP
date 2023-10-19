#include <iostream>
using namespace std;

void antSuc(char l, char *ant, char *suc){
    *ant = l + 1;
    *suc = l - 1;
}

int main(){
    char caracter, sucessor, antecessor;
    cout << "Digite um caracter ";
    cin >> caracter;
    antSuc(caracter, &sucessor, &antecessor);
    cout << antecessor << ", " << caracter << ", " << sucessor << endl;
    return 0;
}

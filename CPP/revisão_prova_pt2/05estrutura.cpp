#include <iostream>
using namespace std;
#include <string>

typedef struct{
    int CPF, RG;
    string nome;
}cliente ;

cliente pessoa;

void leituraCliente(){
    cout << "Nome do cliente: " << pessoa.nome << endl;
    cout << "CPF do cliente: " << pessoa.CPF << endl;
    cout << "RG do cliente: " << pessoa.RG << endl;
}

int main(){
    cout << "Digite seu nome ";
    cin >> pessoa.nome;

    cout << "Digite seu CPF ";
    cin >> pessoa.CPF;

    cout << "Digite seu RG ";
    cin >> pessoa.RG;

    leituraCliente();
}

#include <iostream>
using namespace std;
#include <string>

typedef struct{
    int codigo;
    string descricao;
    int valorUnit;
    int qtde;
} tipoStruct;

tipoStruct produto;

string leStr(){
    string text;
    getline(cin, text);
    if(text[0] == '\0')
        getline(cin, text);
    return text;
}

int main(){
    cout << endl << "CADASTRO DE PRODUTOS" << endl;
    cout << endl << "Digite o codigo ";
    cin >> produto.codigo;
    cout << endl << "Digite a descricao ";
    produto.descricao = leStr();
    cout << endl << "Digite o valor unitario ";
    cin >> produto.valorUnit;
    cout << endl << "Digite a quantidade ";
    cin >> produto.qtde;

    cout << endl;
    cout << endl;

    cout << "Listando produto ..." << endl;
    cout << endl << "Codigo: " << produto.codigo << endl;
    cout << endl << "Descricao: " << produto.descricao << endl;
    cout << endl << "Valor unitario: " << produto.valorUnit << endl;
    cout << endl << "Quantidade: " << produto.qtde << endl;
    
    cout << endl;
}

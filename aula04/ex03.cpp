#include <iostream>
#include "myLib.cpp"
using namespace std;
// 
typedef struct{
    int codProd;
    string descricao;
    float valorUnit;
    int qtde;
} fichaMerc;
// 
int main(){
    fichaMerc list;
    cout << endl << "Cadastro de Produtos" << endl << endl;
//  
    cout << "Codigo do produto: "; cin >> list.codProd;
// 
    cout << "Descricao do produto: "; cin >> list.descricao;
    list.descricao = readStr();
//  
    cout << "Valor do produto: "; cin >> list.valorUnit;
//  
    cout << "Quantidade do produto: "; cin >> list.qtde;
// 
    cout << endl << "Produto Cadastrado!" << endl;
// 
    cout << endl << "Codigo " << list.codProd << endl
    << "Descricao " << list.descricao << endl 
    << "Valor " << list.valorUnit << endl 
    << "Quantidade " << list.qtde << endl;
// 
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

typedef struct{

    int id;
    string descricao;
    float valorUnit;
    int qtd;

}tipoEst;

tipoEst produto;

int main(){
    
    cout << "Codigo do produto ";cin >> produto.id;
    cout << "Descricao do produto ";cin >> produto.descricao;
    cout << "Valor unitario do produto ";cin >> produto.valorUnit;
    cout << "Quantidade do produto ";cin >> produto.qtd;

    return 0;

}

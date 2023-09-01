#include <iostream>
#include "myLib.cpp"
using namespace std;


typedef struct {
    string nome;
    int ra;
    float n1, n2;
}tipoficha;

tipoficha ficha;

void cadastroNotas() {

    cout << " ==== Cadastro foda de notas! ==== " << endl;
    cout << endl << "Informe o seu nome completo:" << endl;
    ficha.nome = readStr();
    cout << "Informe o seu Ra:" << endl;
    cin >> ficha.ra;
    cout << "Informe a nota da P1:" << endl;
    cin >> ficha.n1;
    cout << "informe a nota da p2:" << endl;
    cin >> ficha.n2;

}

void listaNotas() {

    float media; 

    media = (ficha.n1 + ficha.n2)/2;
    
    if(media >= 6){
        cout 
        << "O aluno:                    " << ficha.nome << endl 
        << "Ra:                         " << ficha.ra << endl 
        << "Nota Primeira Prova:        " << ficha.n1 << endl
        << "Nota Segunda Prova:         " << ficha.n2 << endl
        << "Esta aprovado com a media:  " << media << endl;
    }  
    else{
        cout 
        << "O aluno:                    " << ficha.nome << endl 
        << "Ra:                         " << ficha.ra << endl 
        << "Nota Primeira Prova:        " << ficha.n1 << endl
        << "Nota Segunda Prova:         " << ficha.n2 << endl
        << "Esta reprovado com a media: " << media << endl;
    }

}


int main (){

    int op = 1;
    while (op !=0){
        cout << " == Programa para ver notas fodas == " << endl;
        cout << " 1 - Cadastrar" << endl;
        cout << " 2 - Listar" << endl;
        cout << " 3 - fim" << endl;
        cout << "Opcao: ";
        cin >> op;

        switch (op){
        case 1 :
            cadastroNotas();
            break;
        case 2 :
            listaNotas();
            break;
        default:
            break;
        }
    }
    
return 0;
}

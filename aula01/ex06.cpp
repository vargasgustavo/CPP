#include <iostream>
using namespace std;

int main() {
    char sexo;
    int idade;
    string email, cel;
    cout << "Qual o sexo (m/f) ";
    cin >> sexo;
    if (sexo == 'f'){
        cout << "Qual a sua idade ";
        cin >> idade;
        if ((idade > 17) && (idade < 31)){
            cout << "Qual e-mail "; cin >> email;
            cout << "Qual whatsapp "; cin >> cel;
        }
        else {
            cout << "entrareos em contato"<<endl;
        }

    } else {
        cout << "entraremos em contato" << endl;
    }
    return 0;
}
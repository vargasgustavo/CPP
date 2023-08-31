#include <iostream>
using namespace std;

int main() {
    char sexo;
    cout<<"Sexo (m/f) ";
    cin >> sexo;
    if (sexo == 'm'){
        // verdade
        cout << "Comparecer no escitorio dia 10/08";
    } 
    else {
        // falso
        cout << "Muito obrigado, entraremos em contato";
    }
    return 0;
}
#include <iostream>
using namespace std;

int metDob(int valor, int *met, int *dob){
    return *met = valor / 2, *dob = valor * 2;
}

int main(){
    int valor, met, dob;
    cout << "Digite um valor inteiro ";
    cin >> valor;
    metDob(valor, &met, &dob);
    cout << endl << "Seu valor " << valor << ", sua metade " << met << ", seu dobro " << dob << endl;
}

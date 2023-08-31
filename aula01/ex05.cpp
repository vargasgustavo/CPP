/*
Desenvolva um programa que leia duas notas e 
imprima na ordem crescente
*/
#include <iostream>
using namespace std;
int main() {
    float n1,n2, media;
    cout << "Nota da primeira prova ";
    cin >> n1;
    cout << "Nota da segunda prova ";
    cin >> n2;
    media = (n1+n2)/2;
    if (media < 6){
        cout << "Nota da sub ";
        if (n1 > n2){
            cin >> n2;
        }
        else {
            cin >> n1;
        }
        media = (n1 + n2)/2;
        if (media < 6)
            cout << "Reprovado ";
        else cout <<"Aprovado ";
        cout << media <<endl;
    } else {
        cout << "Aprovado " << media << endl;
    }
    return 0;
}
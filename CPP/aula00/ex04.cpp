#include <iostream>
using namespace std;

int main()
{
    string n;
    int idade;
    char sexo;
    cout << "Qual o seu nome: ";
    cin >> n;
    cout << "Qual a sua idade? ";
    cin >> idade;
    cout << "Qual o sexo (m/f): ";
    cin >> sexo;
    cout << "Boa noite " << n << " sua idade eh " << idade << " e sexo " << sexo << endl;
    return 0;
}
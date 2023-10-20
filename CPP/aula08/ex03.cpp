#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream arq;
    arq.open("saida.txt", ios::out);
    string texto;
    cout << "Ctrl+c para finalizar" << endl;
    while (true){
        cin >> texto;
        arq << texto << endl;
    }
    arq .close();
}

#include <iostream>
#include <fstream>
using namespace std;

// grava o texto "c++ ........." no arquivo --> arquivoCPP01.txt

int main(){
    ofstream arq;
    arq.open("arquivoCPP01.txt", ios::out);
    arq << "C++ foi criado em 1979 por Bjarne Stroustrup" << endl;
    arq.close();
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int *p1 = (int *)0x5DC;
    float *p2 = (float *)0x5DC;
    double *p3 = (double *)0x5DC;
    cout << "Endereco de p1 (int)" << p1 << endl;
    cout << "Endereco de p2 (float)" << p2 << endl;
    cout << "Endereco de p3 (double)" << p3 << endl;
    p1++; p2++; p3++;
    cout << "Endereco de p1 (int)" << p1 << endl;
    cout << "Endereco de p2 (float)" << p2 << endl;
    cout << "Endereco de p3 (double)" << p3 << endl;
}

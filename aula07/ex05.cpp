#include <iostream>
using namespace std;

int main(){
    int x = 99;
    int *p;
    int **pp;
    p = &x;
    pp = &p;
    cout << "O valor de x = " << **pp << endl;
    return 0;
}

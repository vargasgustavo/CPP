#include <iostream>
using namespace std;
#define LIST 9

int main(){
    int num[LIST], i;
    for (i = 0; i < LIST; i++){
        cout << "Digite um numero: ";
        cin >> num[i];
    }
    for (i = 0; i < LIST; i++){
        cout << num[i] << endl;
    }

    return 0;
}

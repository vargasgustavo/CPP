#include <iostream> //#include <stio.h>
using namespace std; // não existe em c
int main() {
    int i;
    cout << "Loop usando for" << endl;
    for (i = 1; i <= 10; i++){
        cout << i <<endl; // printf("%d\n",i);
    }

    i = 1;
    cout << "Loop usando while" << endl;
    while ( i <= 10 ){
        cout << i <<endl; // printf("%d\n",i);
        i++;
    }
    i = 1;
    cout << "Loop usando do while" << endl;
    do{
        cout << i <<endl; // printf("%d\n",i);
        i++;
    }while ( i <= 10 );
    return 0;
}
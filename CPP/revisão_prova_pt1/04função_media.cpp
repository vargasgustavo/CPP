#include <iostream>
using namespace std;

float mediaNotas(float n1, float n2){
    float media;
    media = (n1 + n2) / 2;
    return media;
}

int main(){
    float n1, n2, res;
    cout << "Nota 1 ";
    cin >> n1;
    cout << "Nota 2 ";
    cin >> n2;
    res = mediaNotas(n1, n2);
    cout << "Media de notas foi " << res << endl;
}

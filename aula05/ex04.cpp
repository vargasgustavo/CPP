#include <iostream>
using namespace std;

int Media(float n1, float n2){
    float med;
    med = (n1 + n2) / 2;
    return med;
}

int main(){
    float nota1, nota2, media;
    cout << "Primeira nota ";
    cin >> nota1;
    cout << "Primeira nota ";
    cin >> nota2;
    media = Media(nota1, nota2);
    cout << "Media " << media;
    return 0;
}

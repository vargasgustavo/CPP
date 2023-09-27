#include <iostream>
using namespace std;

int area(float base, float altura){
    float area_tri;
    area_tri = (base * altura) /2;
    return area_tri;
}

int main(){
    float res, base = 10, altura = 5;

    res = area(base, altura);

    cout << endl << "O triangulo de base " << base << " e altura " << altura << " tem como sua area valendo " << res << endl;
}

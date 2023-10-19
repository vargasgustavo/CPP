#include <iostream>
using namespace std;
#define MAX 3    
int main() {
    int num[MAX], i;
    //carga
    for (i=0; i<MAX;i++){
        cout << "Digite um numero ";
        cin >> num[i];
    }
    //listagem
    for (i=0;i<MAX;i++){
        cout<< i+1<<" Elemento digitado = "<<num[i]<<endl;
    }
    // somatoria
    int soma = 0;
    float media;
    for (i=0;i<3;i++){
        soma += num[i];
    }
    cout << "Somatoria foi = "<<soma<<endl;
    media = (float) soma/MAX;
    cout << "Media = "<<media<<endl;
   
    //menor
    int menor=num[0];  
    for (i=1;i<3;i++){
        if (num[i]<menor){
            menor = num[i];
        }
    }
    cout << "O menor elemento e = "<<menor<<endl;
    
    //menor
    int maior=num[0];  
    for (i=1;i<3;i++){
        if (num[i]>maior){
            maior = num[i];
        }
    }
    cout << "O maior elemento e = "<<maior<<endl;
    
    return 0;
}

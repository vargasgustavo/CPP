#include <stdio.h>
#include <string.h>

int main(){
    char nome[30] = "Gustavo";
    int idade = 19;
    float altura = 1.66; 
    FILE *f = fopen("arquivo01.txt", "w");
    if (f == NULL){
        return -1;
    }
    fprintf(f, "Nome: %-30s\nIdade: %d\nAltura: %f\n", nome, idade, altura);
    fclose(f); return 0;
}

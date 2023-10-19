#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], txt[30];
    int idade;
    float altura; 
    FILE *f = fopen("arquivo01.txt", "r");
    if (f == NULL){
        return -1;
    }
    fscanf(f, "%s %s", txt, nome);
    printf("%s %s\n", txt, nome);
    fscanf(f, "%s %d", txt, &idade);
    printf("%s %d\n", txt, idade);
    fscanf(f, "%s %f", txt, &altura);
    printf("%s %f\n", txt, altura);
    fclose(f); return 0;
}

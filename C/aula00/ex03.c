#include <stdio.h>
#include <string.h>

int main(){
    FILE *f;
    f = fopen("arquivo01.txt", "r");
    if (f == NULL){
        printf("Erro abertura arquivo");
        return -1;
    }
    char letra;
    int i;
    for (i = 0; i < 38; i++){
        letra = fgetc(f);
        printf("%c", letra);
    }
    printf("\n"); (f); return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *f;
    f = fopen("arquivo01.txt", "w");
    if (f == NULL){
        printf("Erro abertura arquivo");
        return -1;
    }
    char texto[50] = "Meu primeiro programa com arquivo em C";
    int i;
    for (i = 0; i < strlen(texto); i++){
        fputc(texto[i], f);
    }
    fclose(f); return 0;
}

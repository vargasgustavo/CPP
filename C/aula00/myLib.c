#include <stdio.h>
#include <string.h>

int main(){
    FILE *f;
    f = fopen("arquivo04.txt", "w");
    char texto[50] = "Meu novo programa com arquivo em C\n";
    char text2[50] = "C foi criado por Dennis Ritchie em 1972\n";
    fputs(texto, f);
    fputs(text2, f);
    fclose(f); return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *f = fopen("arquivo04.txt", "r");
    if (f == NULL){
        printf("Error: arquivo04");
        return -1;
    }
    char str[50];
    fgets(str, 50, f);
    printf("%s", str);
    fgets(str, 50, f);
    printf("%s", str);
    fclose(f); return 0;
}

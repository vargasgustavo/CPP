#include <stdio.h>

int main()
{
    int x, *p;
    x = 10;
    p = &x;
    printf("Este é o valor da variável x = %d\n", x);
    printf("Este é o endereço da variável x (&x) = %p\n", &x);
    printf("Este é o valor do ponteiro p = %p\n", p);                  // valor de p == endereço de x
    printf("Este é o valor de onde o ponteriro aponta *p = %d\n", *p); // conteudo do endereço onde p aponta
    return 0;
}
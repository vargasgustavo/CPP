#include <stdio.h>

int somaInt(int x, int z)
{
	int
		r = x + z;
	printf("Soma %d\n", r);
	return r;
}
int main()
{
	int a, b, res;
	printf("Digite um inteiro ");
	scanf("%d", &a);
	printf("Digite  outro inteiro ");
	scanf("%d", &b);
	res = somaInt(a, b);
	return 0;
}
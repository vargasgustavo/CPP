#include <stdio.h>
#include <string.h>

void calcMedia(float n1, float n2, float *m, char *sit)
{

	*m = (n1 + n2) / 2;
	if (*m >= 6)
	{
		strcpy(sit, "aprovado ");
	}
	else
	{
		strcpy(sit, "reprovado ");
	}
}

int main()
{
	float med;
	char sit[20];
	calcMedia(6, 7, &med, sit);
	printf("%s %.2f\n", sit, med);
	return 0;
}
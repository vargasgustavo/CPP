#include <stdio.h>
#define PI 3.1416
float areaCirc(float r)
{
	float a;
	a = PI * r * r;
	return a;
}
int main()
{
	float area, raio;
	printf("Qual o raio ");
	scanf("%f", &raio);
	area = areaCirc(raio);
	printf("Area do circulo = %0.f\n", area);
	return 0;
}
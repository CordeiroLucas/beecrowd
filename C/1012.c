#include <stdio.h>

int main(void)
{
	float a, b, c;
	const double PI = 3.14159;

	float areaTri, areaCirc, areaTrap, areaQuad, areaRet;

	scanf(" %f %f %f", &a, &b, &c);

	areaTri = (a * c)/2;
	areaCirc = PI * c * c;
	areaTrap = ((a + b)* c)/2;
	areaQuad = b * b;
	areaRet = a * b;

	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\n", areaTri, areaCirc, areaTrap);
	printf("QUADRADO: %.3f\nRETANGULO: %.3f\n", areaQuad, areaRet);
	
	return 0;
}
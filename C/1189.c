#include <stdio.h>
#define SIZE 100

int main(void)
{
	double vetor[SIZE];

	scanf(" %lf", &vetor[0]);

	for (int i = 1; i < 100; i++) {
		vetor[i] = vetor[i-1] / 2;
	}

	for (int i = 0; i < 100; i++) {
		printf("N[%d] = %.4lf\n", i, vetor[i]);
	}

	return 0;

}
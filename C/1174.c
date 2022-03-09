#include <stdio.h>
#define SIZE 100

int main (void) 
{
	float vetor[SIZE];

	for (int i = 0; i < SIZE; i++) {
		scanf(" %f", &vetor[i]);
	}

	for (int i = 0; i < SIZE; i++) {
		if (vetor[i] <= 10) {
			printf("A[%d] = %.1f\n", i, vetor[i]);
		}
	}

	return 0;
}
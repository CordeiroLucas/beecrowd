#include <stdio.h>
#define SIZE 20

int main(void)
{
	int vetor[SIZE], temp;

	for (int i = 0; i < SIZE; i++) {
		scanf(" %d", &vetor[i]);
	}

	for (int i = 0, j = SIZE - 1; i != SIZE/2; i++, j--) {
		temp = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = temp;
		
	}

	for (int i = 0; i < SIZE; i++) {
		printf("N[%d] = %d\n", i, vetor[i]);
	}

	return 0;
}
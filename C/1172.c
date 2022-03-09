#include <stdio.h>
#define SIZE 10

int main (void)
{
	int vetor[SIZE];

	for (int x; x < SIZE; x++) {
		scanf(" %d", &vetor[x]);
		if (vetor[x] <= 0) {
			vetor[x] = 1;
		}
	}

	for (int x; x < SIZE; x++){
		printf("X[%d] = %d\n", x, vetor[x]);
		
	}

	return 0;
}
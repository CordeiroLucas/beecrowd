#include <stdio.h>
#define SIZE 10


int main (void)
{
	int vetor[SIZE], v;

	scanf(" %d", &v);

	for (int i; i < SIZE; i++) {
		if (i == 0) {
			vetor[i] = v;
		} else {
			vetor[i] = vetor[i-1] * 2;
		}
 	}

	for (int i; i < SIZE; i++) {
		printf("N[%d] = %d\n", i, vetor[i]);
	}

	return 0;

}
#include <stdio.h>
#define SIZE 3

void bubbleSort (int vetor[SIZE]);

int main(void) 
{
	int vetor[SIZE], unsorted[SIZE];

	for (int i = 0; i < SIZE; i++) {
		scanf(" %d", &vetor[i]);
		unsorted[i] = vetor[i];
	}

	bubbleSort (vetor);

	for (int i = 0; i < SIZE; i++) {
		printf("%d\n", vetor[i]);
	}
	printf("\n");

	for (int i = 0; i < SIZE; i++) {
		printf("%d\n", unsorted[i]);
	}

	return 0;
};

void bubbleSort (int vetor[SIZE]) 
{
	int aux;
	for (int i = 0; i < SIZE-1; i++) {
		for(int j = 0; j < (SIZE - i); j++) {
			if (vetor[j] > vetor[j+1]) {
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
};
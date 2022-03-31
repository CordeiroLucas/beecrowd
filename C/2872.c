#include <stdio.h>

int insertionSort (int arr[], int lenght);

int main(void)
{
	char string[20];
	int pacote[1000], i = 0, entrada;

	while (scanf(" %d", &entrada) != EOF) {
		if (entrada == 0) {
			insertionSort(pacote, i);
			for (int j = 0; j < i; j++) {
				printf("Package %03d\n", pacote[j]);
			}
			printf("\n");
			i = 0;
		} else if (entrada == 1) {
			scanf(" %s %d", string, &pacote[i]);
			i++;
		}
		
		
	}

	return 0;
}

int insertionSort (int arr[], int lenght) 
{
	for (int x = 1; x < lenght; x++) {
		int y = x;
		while ((arr[y] < arr[y-1]) && y > 0) {
			int aux = arr[y-1];
			arr[y-1] = arr[y];
			arr[y] = aux;
			y--;
		}
	}
	return 0;

}
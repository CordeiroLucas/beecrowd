#include <stdio.h>
#include <string.h>
#define N 5
#define provas 4

//struct aluno para melhor organizar os seus dados
struct aluno {
	int matricula;
	float media;
	char status[13];
};

//Declara a função de ordenação
void selectionSort (struct aluno arr[]);
void troca (struct aluno arr[], int i, int j);

//Media inferior a 6 = Reprovado

int main (void) 
{
	struct aluno listaAlunos[N];
	float somaNota, nota;
                                              
	for (int i = 0; i < N; i++) {
		scanf(" %d", &listaAlunos[i].matricula);

		somaNota = 0;
		for (int j = 0; j < provas; j++) {
			scanf(" %f", &nota);
			somaNota += nota;
		}

		//Faz a média 
		listaAlunos[i].media = (int)(somaNota*100 / provas);
		listaAlunos[i].media = (float)listaAlunos[i].media / 100;

		//Atribui o status de aprovado ou reprovado ao aluno
		if (listaAlunos[i].media < 6) {
			strcpy(listaAlunos[i].status, "Reprovado");
		} else {                                                                                                                 
			strcpy(listaAlunos[i].status, "Aprovado");
		}
	}

	selectionSort(listaAlunos);
	
	// Já atualiza o status do primeiro lugar para classificado
<<<<<<< HEAD
	strcpy(listaAlunos[0].status, "Classificado");
=======
	if (listaAlunos[0].media >= 6) {
		strcpy(listaAlunos[0].status, "Classificado");
	}
	
>>>>>>> 612f48f965c1ae395a94f1abf63d0779c0ee4c61

	// Já printa o resultado
	for (int i = 0; i < N; i++) {
		printf("%d %.2f %s\n", listaAlunos[i].matricula, listaAlunos[i].media, listaAlunos[i].status);
	}

	return 0;
}

// Ordenação
void selectionSort (struct aluno arr[]) 
{
	int atualVetor, aux;

	for (int i = 0; i < N-1; i++) {
		atualVetor = i;
		for (int j = i+1; j < N; j++) {
			if (arr[atualVetor].media < arr[j].media) {
				atualVetor = j;
			}
		}
		troca(arr, atualVetor, i);
	}
}

void troca (struct aluno arr[], int i, int j) {
	struct aluno aux;
	aux = arr[i];
	arr[i] = arr[j];
	arr[j] = aux;
}
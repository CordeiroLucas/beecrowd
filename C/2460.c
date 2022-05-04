#include <stdio.h>
#include <stdlib.h>

struct node {
	int id;
	struct node *next;
}typedef Node;

struct queue {
	Node *inicio;
	Node *fim;
}typedef Queue;

void initNode(int id, Node *no);
void initQueue(Queue *afila);
void inserir(int id, Queue *afila);
void remover(int id, Queue *afila);
void print(Queue *afila);

int main (void)
{
	Queue *afila = (Queue *) malloc(sizeof(Queue));
	initQueue (afila);

	int n, m, id, i;

	scanf(" %d", &n);

	for (i = 0; i < n; i++) {
		scanf(" %d", &id);
		inserir(id, afila);
	}

	scanf(" %d", &m);

	if (m < n) {
		for (i = 0; i < m; i++) {
			scanf(" %d", &id);
			remover(id, afila);
		}
	}

	print(afila);

	return 0;
}

void initQueue(Queue *afila)
{
	afila->inicio = NULL;
	afila->fim = NULL;
}

void initNode(int id, Node *no)
{
	no->id = id;
	no->next = NULL;
}

void inserir(int id, Queue *afila)
{
	Node *newNode = (Node *) malloc(sizeof(Node));
	initNode (id, newNode);

	if (afila->inicio != NULL) {
		afila->fim->next = newNode;
		afila->fim = newNode;
	} else {
		afila->inicio = newNode;
		afila->fim = newNode;
	}
}

void remover(int busca, Queue *afila)
{
	Node *ptr, *aux;

	if (afila->inicio != NULL) {
		if (afila->inicio->id != busca) {
			for (ptr = afila->inicio; ptr != NULL; ptr = ptr->next) {
				if (ptr->next->id == busca) {
					if (afila->fim == ptr->next) {
						ptr->next = NULL;
						afila->fim = ptr;
					} else {
						aux = ptr->next;
						ptr->next = aux->next;
						free(aux);
					}
					return;
				}
			}
		} else {
			if (afila->inicio != afila->fim) {
				ptr = afila->inicio;
				afila->inicio = ptr->next;
				free(ptr);
			} else {
				initQueue (afila);
			}
		}
	} else {
		printf("EMPTY\n");
	}
}

void print(Queue *afila) 
{
	Node *ptr;
	
	if (afila->inicio != NULL) {
		for (ptr = afila->inicio; ptr != NULL; ptr = ptr->next) {
			if (ptr->next != NULL) {
				printf("%d ", ptr->id);
			} else {
				printf("%d\n", ptr->id);
			}
		}
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int numero;
	struct node *next;
}typedef Node;

struct pilha {
	struct node *topo;
}typedef Pilha;

void initNode(int numero, Node *newNode);
void initPilha(Pilha *apilha);
void push(int numero, Pilha *apilha);
void pop(Pilha *apilha);
void min(Pilha *apilha);

int main(void)
{	
	Pilha *apilha = (Pilha *)malloc(sizeof(Pilha));
	initPilha(apilha);

	int i = 0, acoes, numero;
	char opc[10];

	scanf(" %d", &acoes);

	do {
		scanf(" %s %d", opc, &numero);
	
		if (strcmp(opc, "PUSH") == 0) {
			push(numero, apilha);
			i++;
		} else if (strcmp(opc, "POP") == 0) {
			pop(apilha);
			i++;
		} else if (strcmp(opc, "MIN") == 0) {
			min(apilha);
			i++;
		}
	} while (i < acoes);
	return 0;
}

void initNode(int numero, Node *newNode)
{
	newNode->numero = numero;
	newNode->next = NULL;
}

void initPilha(Pilha *apilha)
{
	apilha->topo = NULL;
}

void push(int numero, Pilha *apilha)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	initNode(numero, newNode);

	if (apilha !=  NULL) {
		newNode->next = apilha->topo;
		apilha->topo = newNode;
	}
}

void pop(Pilha *apilha)
{
	Node *ptr;
	if (apilha->topo != NULL) {
		ptr = apilha->topo;
		apilha->topo = ptr->next;
		free(ptr);
		return;
	} else {
		printf("EMPTY\n");
	}
}

void min(Pilha *apilha)
{
	Node *ptr;
	int menor, incremento = 0;

	if (apilha->topo != NULL) {
		for (ptr = apilha->topo; ptr != NULL; ptr = ptr->next) {
			incremento++;
			if (incremento == 1) {
				menor = ptr->numero;
			} else {
				if (menor > ptr->numero) {
					menor = ptr->numero;
				}
			}
		}
		printf("%d\n", menor);
	}

	return;
}
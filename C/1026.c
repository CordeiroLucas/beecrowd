#include <stdio.h>

/*
	equalZero inicializa o array como um armazenamento de 4Bytes
*/
void equalZero (int bin[32]);
/*
	printBin32 percorre e printa o array separando por byte
*/
void printBin32 (int bin[32]);
/*
	toBinarie converte um número inteiro, em um número binário em um array já deixando
	na ordem certa
*/
void toBinarie (int num, int bin[32]);

int main(void)
{
	int a, b, binA[32], binB[32], binResult[32], finalResult;

	equalZero(binA);
	equalZero(binB);
	equalZero(binResult);

	scanf(" %d %d", &a, &b);

	toBinarie(a, binA);
	toBinarie(b, binB);

	printBin32(binA);
	printf("\n");
	printBin32(binB);

	printf("\n");
 


	return 0;
}

void equalZero (int bin[32]) 
{
	for (int x = 0; x < 32; x++)
		bin[x] = 0;
}

void printBin32 (int bin[32])
{
	for (int x = 0; x < 32; x++) {
		printf("%d", bin[x]);
		/*
			A cada 1 byte ele separa (por questão de organização mesmo)
		*/
		if ((x+1)% 8 == 0)
			printf(" ");
	}
	return;
}

void toBinarie (int num, int bin[32]) 
{
	int result;

	/*
	Ele começa mudando os valores do array bin da direita para a esquerda. Ele inicializa
	a variável indexFim para em quanto for avançando na simplificação do número, ele não 
	perder a posição correta para efetuar a troca (de 0 para 1).

	Ex: toBinarie (4, bin)
		passo 1 -> 4 diferente de 1 e o programa ainda não percorreu os 32 "bits" do array;
		passo 2 -> o resto da divisão de 4 por 2 é 0, então o primeiro digito da direita para esquerda é 0,
		 e armazena no bin na ultima posição; 
		passo 3 -> ele atualiza o valor de 4 passando a ser 2 (num (antigo 4) = 4/2 -> num = 2);
		passo 4 -> repete o processo até a divisão de num/2 passar a ser 1, que aí chegamos no fim da conversão.
	*/
	for (int indexFim = 31, i = 0; num != 0; indexFim--) {
		result = num/2;
		if (indexFim == 0 && result != 1) {
			printf("Número Maior Que 32bits!!!!!\n");
		} else {
			if (num == 1) {
				bin[indexFim] = 1;
			}else {
				if (num % 2 == 0) 
					bin[indexFim] = 0;
				else
					bin[indexFim] = 1;
			} 	
			num = result;
		}
	}
	return;
}	

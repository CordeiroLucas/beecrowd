#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
	pegar apenas as primeiras letras das palavras
*/

int main(void)
{
	char texto[5000], letra0, letra1;
	int s = 0, caracterPalavra = 0, aliteracoes = 0, teveAlit = 0;

	scanf(" %[^\n]", texto);

	printf("\n");

	for (char i = texto[s];i != '\0'; s++, i = texto[s]) {
		
		if (i != ' ' && i != EOF) {
			if (caracterPalavra == 0 && s == 0) {
				printf("%c", i);
				letra0 = i;
				letra1 = i;
				caracterPalavra++;

			} else if (caracterPalavra == 0) {
				printf("%c", i);
				letra1 = i;
				caracterPalavra++;

				if (letra0 == letra1) {
					printf(" < - ponto igualdade ");
					teveAlit = 1;
					continue;
				} else {
					printf(" < - ponto desigualdade ");
					letra0 = i;
					if (teveAlit == 1) {
						aliteracoes++;
						teveAlit = 0;
					} else {
						continue;
					} 
				}
			} else {
				continue;
			}

		} else if (i == ' ') {
			caracterPalavra = 0;
			printf("\n");

		} else if (i == EOF) {
			return 0;
		}
	}

	if (teveAlit == 1) {
		aliteracoes++;
	}

	printf("\naliterações: %d\n", aliteracoes);

	return 0;
}
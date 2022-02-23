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


	for (char i = tolower(texto[s]);i != '\0'; s++, i = tolower(texto[s])) {
		
		if (i != ' ' && i != EOF) {
			if (caracterPalavra == 0 && s == 0) {
				letra0 = i;
				letra1 = i;
				caracterPalavra++;

			} else if (caracterPalavra == 0) {
				letra1 = i;
				caracterPalavra++;

				if (letra0 == letra1) {
					teveAlit = 1;
					continue;
				} else {
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
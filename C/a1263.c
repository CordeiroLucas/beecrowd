#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
	pegar apenas as primeiras letras das palavras
*/

int main(void)
{
	char texto[5000], letra0, letra1, i;
	

	while (scanf(" %[^\n]%*c", texto) != EOF) {

		int s = 0, caracterPalavra = 0, aliteracoes = 0, teveAlit = 0;

		for (i = tolower(texto[s]);i != '\n'; s++) {
			i = tolower(texto[s]);
			
			if (i != ' ') {
				if (caracterPalavra == 0 && s == 0) {
					letra0 = i;
					letra1 = i;
					caracterPalavra++;

				} else if (caracterPalavra == 0) {
					letra1 = i;
					caracterPalavra++;

					if (letra0 == letra1) {
						teveAlit = 1;
					} else {
						letra0 = i;
						if (teveAlit == 1) {
							aliteracoes++;
							teveAlit = 0;
						} 
					}
				}

			} else {
				caracterPalavra = 0;
			}
		}
		if (teveAlit == 1) {
			aliteracoes++;
		}
		printf("%d\n", aliteracoes);
		
	}

	return 0;
}
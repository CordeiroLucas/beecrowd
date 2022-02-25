#include <stdio.h>
#include <string.h>

int main() {

	char resposta[10];
	int i = 0;
  	while (scanf("%[^\n]%*c", resposta) != EOF) {
		
		if (strcmp(resposta, "esquerda") == 0) {
			printf("ingles\n");
			
		} else if (strcmp(resposta, "direita") == 0) {
			printf("frances\n");
			
		} else if (strcmp(resposta, "nenhuma") == 0) {
			printf("portugues\n");
			
		} else if (strcmp(resposta, "as duas") == 0) {
			printf("caiu\n");
		} 
    }	

    return 0;
}
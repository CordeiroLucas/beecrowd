#include <stdio.h>

int main(void)
{
	int segundosTotal;
	int hora, minutos, segundos;

	scanf(" %d", &segundosTotal);

	if (segundosTotal >= 3600) {
		hora = segundosTotal / 3600;
		segundosTotal -= hora * 3600;
	} else hora = 0;

	if (segundosTotal >= 60) {
		minutos = segundosTotal / 60;
		segundosTotal -= minutos * 60;
	} else minutos = 0;

	if (segundosTotal < 60) {
		segundos = segundosTotal;
	} 

	printf("%d:%d:%d\n", hora, minutos, segundos);

	return 0;
}
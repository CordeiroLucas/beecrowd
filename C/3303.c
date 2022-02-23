#include <stdio.h>

int main(void)
{
	int i;

	char palavra[20];

	scanf(" %s", palavra);

	for (i = 0; i <= 10; i++)
	{
		if (palavra[i] != '\0')
		{
			continue;
		}
		else
		{
			break;
		}
	}

	if (i + 1 > 10)
	{
		printf("palavrao\n");
	}
	else
	{
		printf("palavrinha\n");
	}

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void)
{
	FILE *Pfile;
	char texto[100];
	Pfile = fopen("texto.txt", "r");
	if (Pfile == NULL)
	{
		printf("\nErro na abertura do arquivo!\n");
		exit(0);
	}
	while (fgets(texto, 100, Pfile) != NULL)
	{
		printf("%s caracteres\n", texto);
		printf("%d caracteres", strlen(texto));
	}

	fclose(Pfile);
	return(0);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Cabeçalho
Instituição: Faculdade dos Guararapes
Professor: Guibson Santana
Aluno: Ângelo Gonçalo da Silva
Turma: CCO 2-MA PIE
Data de Entrega: 22/08/2018
Data de Resolução: 05/09/2018

Criar um algoritmo em C que receba um Estado brasileiro por
extenso e o programa deve imprimir sua respectiva Sigla.
Exemplo:

Digite um estado: Pernambuco.

Sigla: PE.*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[20];
	int tamanho;
	do
	{
	
		
		printf ("\nNome digitado pode ter no máximo 20 caracteres para poder ser adicionado.\nNome: ");
		gets (nome);
		tamanho = strlen(nome);
		if(tamanho<=20)
		{
			printf("\nNOME CADASTRADO!\n\n");
		}
		else
		{
			printf("\nQuantidade de caracteres é maior que 20 caracteres.\n\n"); 
		
		}
	}while(tamanho>20);
	

	return(0);
}


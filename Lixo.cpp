#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


struct Cadastro
{
	char nome[200];
}; struct Cadastro pessoa[20]; 

void *cadastro();
void *consultar();
int count;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int opc;
	int count;
	printf("-------------------------------------------------------\n");
	printf ("----------------------Bem Vindo!-----------------------\n\n");
	printf("Por favor, selecione uma das Opções:\n");
	printf("1 - Adicionar Nome\n");
	printf("2 - Consultar Nome\n");
	printf("3 - Alterar   Nome\n");
	printf("4 - Excluir   Nome\n");
	printf("-------------------------------------------------------\n");
	printf("\nOpção: ");
	scanf("%d", &opc);
		
	switch (opc)
	{
		case 1: 
		cadastro();
		system("cls");
		main();
		break;
		
		case 2:
		consultar();
		break;
	}
	return(0);
}
void *cadastro()
{

	printf("Nome: ");
	scanf ("%s", pessoa[count].nome);
	return pessoa[count].nome;
}
void *consultar()
{
	for(count = 0; count < 20; count++)
	{
	fflush(stdin);
	printf("\nNome %d: ", count + 1);
	gets([count].nome);
	}
}

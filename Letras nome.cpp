#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
 
int main() 
{ 
 	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Informe sua idade: "); 
	scanf("%d",&idade);
	printf("\nVoc� tem %d anos", idade);
	if(idade < 16)
	{
		printf("\n\nVoc� � um: N�o-eleitor\n");	
	}
	if((idade >= 16) && (idade <=18))
	{
		printf("\n\nVoc� � um: Eleitor Facultativo\n");	
	}
	if(idade >= 70)
	{
		printf("\n\nVoc� � um: Eleitor Facultativo\n");	
	}
	else
	{
		printf("\n\nVoc� � um: Eleitor Obrigat�rio\n");
	}
	printf("\n");  
	return(0);
}

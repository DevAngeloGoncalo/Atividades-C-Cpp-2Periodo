#include <stdio.h>
#include <stdlib.h>

main(){

    int nota;

    printf("Digite uma Nota: ");
    scanf("%d", &nota);
    
    while((nota < 0) || (nota > 10))
    {
    	printf("Nota Incorreta, informe novamente: ");
    	scanf("%d", &nota);
	}
	if(nota >= 7)
	{
		printf("Sua nota �: %d", nota, "Aprovado");
	}
	else
	{
		printf("Sua nota �: %d", nota, "Reprovado");
	}
}

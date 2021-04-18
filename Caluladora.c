#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

/* Declaracaode Variaveis*/
int Dias; 
float Anos;
printf("Entre com o número de dias: "); 
/* Entrada de Dados */
scanf("%d",&Dias);
Anos=Dias/365.25; 
/* Conversao Dias->Anos */
printf
("\n\n %d dias equivalem a %f anos.\n",Dias,Anos);
return(0);
}


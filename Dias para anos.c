#include <stdio.h>
#include <locale.h>

int main()
{
/* Seleciona o idioma PT-BR para o códgo */
setlocale(LC_ALL, "Portuguese");
/* Declaracaode Variaveis*/
int Dias; 
float Anos;
printf("Entre com o número de dias: "); 
/* Entrada de Dados */
scanf("%d",&Dias);
Anos=Dias/365.25; 
/* Conversao Dias->Anos */
printf("\n\n %d dias equivalem a %f anos.\n",Dias,Anos);
return(0);
}


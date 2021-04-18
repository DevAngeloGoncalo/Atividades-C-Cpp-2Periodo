#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Cabeçalho
Instituição: Faculdade dos Guararapes
Professor: Guibson Santana
Aluno: Ângelo Gonçalo da Silva
Turma: CCO 2-MA PIE
Data de Entrega: 22/08/2018
Data de Resolução: 15/08/2018 */

int main()
{
/* Seleciona o idioma PT-BR para o código */
	setlocale(LC_ALL, "Portuguese");
/* Declaracaode Variáveis*/
	float R, area;
	const float pi = 3.14;
/* Consulta o usúario sobre o valor do raio */
	printf("Informe o valor do raio da circunferência: "); 
/* Entrada de Dados */
	scanf("%f",&R);
/* Formula para descobrir o valor da área */	
	area = pi * pow(R, 2) ;
/* Retorna ao usúario o valor da área da circunferência */
	printf("\n A área da circunferência equivale à: %f", area);
	return(0);
}

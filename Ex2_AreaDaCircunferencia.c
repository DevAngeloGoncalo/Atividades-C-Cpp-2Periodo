#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Cabe�alho
Institui��o: Faculdade dos Guararapes
Professor: Guibson Santana
Aluno: �ngelo Gon�alo da Silva
Turma: CCO 2-MA PIE
Data de Entrega: 22/08/2018
Data de Resolu��o: 15/08/2018 */

int main()
{
/* Seleciona o idioma PT-BR para o c�digo */
	setlocale(LC_ALL, "Portuguese");
/* Declaracaode Vari�veis*/
	float R, area;
	const float pi = 3.14;
/* Consulta o us�ario sobre o valor do raio */
	printf("Informe o valor do raio da circunfer�ncia: "); 
/* Entrada de Dados */
	scanf("%f",&R);
/* Formula para descobrir o valor da �rea */	
	area = pi * pow(R, 2) ;
/* Retorna ao us�ario o valor da �rea da circunfer�ncia */
	printf("\n A �rea da circunfer�ncia equivale �: %f", area);
	return(0);
}

#include <stdio.h>
#include <locale.h>

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
	float saldo, valor_total;
/* Consulta o us�ario sobre o valor do seu saldo */
	printf("Digite o saldo: "); 
/* Entrada de Dados */
	scanf("%f",&saldo);
/* Formula para descobrir o valor total */	
	valor_total = saldo + (saldo * 5) / 100;
/* Retorna ao us�ario o valor do saldo mais 5% do seu rendimento */
	printf("\n O saldo mais o rendimento de 5%% � de: %f", valor_total);
	return(0);
}


#include <stdio.h>
#include <locale.h>

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
	float saldo, valor_total;
/* Consulta o usúario sobre o valor do seu saldo */
	printf("Digite o saldo: "); 
/* Entrada de Dados */
	scanf("%f",&saldo);
/* Formula para descobrir o valor total */	
	valor_total = saldo + (saldo * 5) / 100;
/* Retorna ao usúario o valor do saldo mais 5% do seu rendimento */
	printf("\n O saldo mais o rendimento de 5%% é de: %f", valor_total);
	return(0);
}


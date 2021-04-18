#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Cabeçalho
Instituição: Faculdade dos Guararapes
Professor: Guibson Santana
Alunos: Ângelo Gonçalo da Silva, Victor Robson dos Santos e Lucas Gabriel de Lima Souza
Turma: CCO 2-MA PIE
Data de Entrega: 30/11/2018 */

/*Descrição do Programa:
 
Desafio 04 – Cadastro de personagem

Funciona como uma estrutura de cadastro de um jogo de RPG, onde o usuário irá informar um nome para o seu login,
um nome para seu personagem, senha e seus atributos, como força, defesa, destreza e poder mágico.
E ao final, imprime em um arquivo txt todas as informações.

*/
/*Demonstração das funções com passagem de parâmetro
Foi dado a cada função a responsabilidade de mostrar na tela quantos pontos foram utilizados em cada atributo.*/
typedef struct{

    char nickUser[20];
    char nickChar[20];
    char senha[20];
    char confirmaSenha[20];

}Player;

int compararNickUser(Player aux[], int tam){

    int i;

    for(i = 0; i<tam; i++)
        if(strcmp(aux[i].nickUser, aux[tam].nickUser) == 0){
            printf("\n\nUsuario %s Não Disponível...\n", aux[tam].nickUser);
            printf("\nInforme outro usuario: ");
            fflush(stdin);
            scanf("%[^\n]", aux[tam].nickUser);
            return 0;
        }

    system("cls");

    return 1;
}

int main(void)
{
	setlocale (LC_ALL,"Portuguese");
	
	struct Player 
	{
		char nickUser[20]; 
		char nickChar[20]; 
		char senha[20];    
		char confirmaSenha[20]; 
	}; struct Player players[5];
	
	int count;
	int qntdPlayer;
	
	printf("\n\nPor favor, Informe quantos jogadores serão cadastrados(Limite de 5 jogadores): ");
	scanf("%d", &qntdPlayer);
	if (qntdPlayer > 0 && qntdPlayer <= 5) 
	{
	
		for (count = 0; count < qntdPlayer; count++)
		{
			system("cls"); 
			fflush(stdin);
			
			printf("Nome do Usuário:");
			gets(players[count].nickUser);
			while(compararNickUser(players, count)!=1);
			printf("\nMuito bem, você usará esse nome para realizar o login no jogo!\nLogin: %s\n", players[count].nickUser);
			
			printf("Pressione qualquer tecla para continuar.");
			getch(); 
			system("cls");
			fflush(stdin);
			printf("Nome do Personagem:");
			gets(players[count].nickChar);
			printf("\nPerfeito, é assim que seus amigos o reconhecerão!\nNick: %s\n", players[count].nickChar);
			
			printf("Senha: ");
			gets(players[count].senha); 
			printf("Repita a senha para que ocorra a confirmação.\n\nConfirmação de Senha:");
			gets(players[count].confirmaSenha); 
			
			do 
			{
				if (strcmp (players[count].senha, players[count].confirmaSenha)) 
				{
					printf("Algo deu errado, as senhas não são iguais, por favor, tente mais uma vez\n");
					printf("Tome cuidado com a sua senha, ela é muito importante!\n\n");
					printf("Confirmação de Senha:");
					gets(players[count].confirmaSenha); 
				}
				else 
				{
					printf("\nMais uma etapa concluida com louvor!\n"); 
				}
			}while (strcmp (players[count].senha, players[count].confirmaSenha)); 	
			printf("\nPressione qualquer tecla para continuar.");
			getch(); 
			system("cls"); 		

		}
		FILE *Pfile; 
		Pfile = fopen("texto.txt", "w"); 
		if (Pfile == NULL) 
		{
			printf("Erro na abertura do arquivo.");
			exit(0); 
		}
		for (count = 0; count < qntdPlayer; count++) 
		{
			fprintf(Pfile, "\nNome: %s\n",players[count].nickUser);
			fprintf(Pfile, "Personagem: %s\n",players[count].nickChar);
			fprintf(Pfile, "Senha: %s\n",players[count].senha);
		}
		fclose(Pfile);
	}
	else
	{
		printf("Só pode inserir até 5 pessoas");
		return 0; 
	}
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

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

int compararSenha(char string1[], char string2[]){

    if(strcmp(string1, string2) != 0){
        printf("Algo deu errado, as senhas não são iguais, por favor, tente mais uma vez\n");
        printf("Tome cuidado com a sua senha, ela é muito importante!\n\n");
        printf("Confirmação de Senha:");
        fflush(stdin);
        scanf("%[^\n]", string2);
        return 0;
    }

    system("cls");

    return 1;
}

int main(){

	int count, qntdPlayer;
	Player players[5];
	char stringaux[20];
    FILE *Pfile;

	setlocale (LC_ALL,"Portuguese");

	printf("\n\nPor favor, Informe quantos jogadores serão cadastrados(Limite de 5 jogadores): ");
	scanf("%d", &qntdPlayer);

	if (qntdPlayer < 1 || qntdPlayer > 5){
		printf("\nNúmero de Cadastros Inválido!\n");
		return 0;
	}

    for (count = 0; count < qntdPlayer; count++){

        system("cls");
        printf("Nome do Usuário:");
        fflush(stdin);
        scanf("%[^\n]", players[count].nickUser);
        while(compararNickUser(players, count)!=1);
        printf("\nMuito bem, você usará esse nome para realizar o login no jogo!\nLogin: %s\n", players[count].nickUser);
        system("pause");
        system("cls");

        printf("Nome do Personagem:");
        fflush(stdin);
        scanf("%[^\n]", players[count].nickChar);
        printf("\nPerfeito, é assim que seus amigos o reconhecerão!\nNick: %s\n", players[count].nickChar);
        system("pause");
        system("cls");

        printf("Senha: ");
        fflush(stdin);
        scanf("%[^\n]", players[count].senha);
        printf("Repita a senha para que ocorra a confirmação.\n\nConfirmação de Senha: ");
        fflush(stdin);
        scanf("%[^\n]", players[count].confirmaSenha);
        while(compararSenha(players[count].senha, players[count].confirmaSenha) != 1);
        printf("\nMais uma etapa concluida com louvor!\n\n");
        system("pause");
        system("cls");

    }

    Pfile = fopen("texto.txt", "w");

    if (Pfile == NULL){
        printf("Erro na abertura do arquivo.");
        exit(0);
    }

    for (count = 0; count < qntdPlayer; count++)
        fprintf(Pfile, "\n\nNome: %s\nPersonagem: %s\nSenha: %s\n\n",players[count].nickUser, players[count].nickChar, players[count].senha);

    fclose(Pfile);

    return 0;
}

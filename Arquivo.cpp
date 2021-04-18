#include<stdio.h>
#include<stdlib.h>
struct Aluno{
    char nome[30];
    char email[30];
    float peso;
    float altura;
    float imc;
}alunos[20];

float calcular_imc(float altura, float peso)
{
    float imc = peso/(altura*altura);
}

int main(){
    int pos_cadastradas[30];
    int index = 0;
    int pos;
    int opcao;
    do{
        printf("1.Cadastrar | 2.Listar | 3.Remover | 4.Listar IMC | 0.Sair:");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                pos = 0;
                printf("\nPosicao(de 0 a 19):");
                scanf("%d",&pos);
                if(pos <= 19){
                    fflush(stdin);
                    printf("Nome:");
                    gets(alunos[pos].nome);
                    printf("Email:");
                    gets(alunos[pos].email);
                    printf("Peso:");
                    scanf("%f",&alunos[pos].peso);
                    printf("altura:");
                    scanf("%f",&alunos[pos].altura);
                    alunos[pos].imc = calcular_imc(alunos[pos].altura,alunos[pos].peso);
                    pos_cadastradas[index] = pos;
                    index++;
                    break;
                    printf("\n1.Cadastrar | 2.Listar | 3.Remover | 4.Listar IMC | 0.Sair:");
                    scanf("%d",&opcao);
                }else{
                    printf("Opcao invalida, fechando algoritmo...");
                    exit(-1);
                }
            case 2:
                for(int i = 0; i < index; i++){
                    printf("\nNome:%s",alunos[pos_cadastradas[i]].nome);
                    printf("\nEmail:%s",alunos[pos_cadastradas[i]].email);
                    printf("\nAltura:%f",alunos[pos_cadastradas[i]].altura);
                    printf("\nIMC:%f",alunos[pos_cadastradas[i]].imc);

                }
                    break;
                    printf("\n1.Cadastrar | 2.Listar | 3.Remover | 4.Listar IMC | 0.Sair:");
                    scanf("%d",&opcao);
            case 3:
                exit(0);
            case 4:
                  for(int i = 0; i < index; i++){
                    printf("\nIMC:%f",alunos[pos_cadastradas[i]].imc);
                }
                 break;
                 printf("\n1.Cadastrar | 2.Listar | 3.Remover | 4.Listar IMC | 0.Sair:");
                 scanf("%d",&opcao);
            default:
                 printf("Opcao invalida, fechando algoritmo...");
                 exit(-1);
        }
    }while(opcao != 0);
    system("PAUSE");
}


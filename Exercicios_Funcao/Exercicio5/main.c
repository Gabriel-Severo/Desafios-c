#include <stdio.h>
#include <string.h>

int qtdeAlunos = 0;

typedef struct Aluno{
    int id;
    int idade;
    char nome[50];
    char sexo;
}Aluno;

void leDados(Aluno alunos[]){
    fflush(stdin);
    printf("Entre com os dados\n");
    alunos[qtdeAlunos].id=0;
    printf("nome:\n");
    gets(alunos[qtdeAlunos].nome);
    printf("idade:\n");
    scanf("%d", &alunos[qtdeAlunos].idade);
    printf("sexo\n");
    scanf("%s", &alunos[qtdeAlunos].sexo);
    qtdeAlunos++;
    printf("\n\n");
}
void imprimeAlunos(Aluno alunos[]){
    int i;
    printf("--Alunos:\n");
    for(i=0;i<qtdeAlunos;i++){
        if(alunos[i].id!=-1){
            printf("Nome:%s\n", alunos[i].nome);
            printf("Idade:%d\n", alunos[i].idade);
            printf("Sexo:%c\n", alunos[i].sexo);
        }
    }
    printf("\n\n");
}
void removeAluno(int indice, Aluno alunos[]){
    printf("O aluno %s foi removido\n", alunos[indice].nome);
    alunos[indice].id=-1;
    strcpy(alunos[indice].nome, "");
    alunos[indice].idade=0;
    alunos[indice].sexo=' ';
    printf("\n\n");
}
//implemente aqui suas funções
int main(){
    Aluno alunos[10];
    leDados(alunos);
    imprimeAlunos(alunos);
    leDados(alunos);
    imprimeAlunos(alunos);
    removeAluno(0, alunos);
    imprimeAlunos(alunos);
    return 0;
}

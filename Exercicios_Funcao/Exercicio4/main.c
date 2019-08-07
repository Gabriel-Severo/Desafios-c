#include <stdio.h>
#include <stdlib.h>
#define QUANTIDADE 4
void informarSituacao(float media){
    if(media>=7)
        printf("Aprovado");
    else if(media>5)
        printf("Exame");
    else
        printf("Reprovado");
}
void calcularMedia(float nota1, float nota2, float nota3, float nota4){
    float media = (nota1 + nota2 + nota3+ nota4) / 4;
    printf("A media é %f", media);
    printf("\n");
    informarSituacao(media);
}
int main()
{
    float notas[QUANTIDADE];
    int i;
    for(i=0;i<QUANTIDADE;i++){
        printf("Digite a nota %d ", i+1);
        scanf("%f", &notas[i]);
    }
    calcularMedia(notas[0], notas[1], notas[2], notas[3]);
    return 0;
}

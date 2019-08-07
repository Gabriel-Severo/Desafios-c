#include <stdio.h>
#include <stdlib.h>
void fibonacci(int posicao){
    int i, valorAnterior=1, proximoValor=1;
    for(i=0;i<posicao;i++){
        printf("%d ", valorAnterior);
        proximoValor = valorAnterior + proximoValor;
        valorAnterior = proximoValor - valorAnterior;
    }
}
int main()
{
    int posicao;
    printf("Digite a quantidade de posições que você deseja ");
    scanf("%d", &posicao);
    fibonacci(posicao);
    return 0;
}

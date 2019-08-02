#include <stdio.h>
#define TAM 100

int main(){
	int n, vetor[TAM], menor, i;
	printf("Digite o tamanho do vetor ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Digite o %dº número ", i+1);
		scanf("%d", &vetor[i]);
	}
	menor = vetor[0];
	for(i = 0; i < n; i++)
		if(menor>vetor[i])
			menor=vetor[i];
	printf("O menor valor é %d\n", menor);
}

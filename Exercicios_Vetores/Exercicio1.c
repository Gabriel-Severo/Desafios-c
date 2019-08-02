#include <stdio.h>
#define TAM 100

int main(){
	int n, vetor[TAM], maior, i;
	printf("Digite o tamanho do vetor ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Digite o %dº número ", i+1);
		scanf("%d", &vetor[i]);
	}
	maior = vetor[0];
	for(i = 0; i < n; i++)
		if(maior<vetor[i])
			maior=vetor[i];
	printf("O maior valor é %d\n", maior);
}

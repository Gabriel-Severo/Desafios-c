#include <stdio.h>
#define TAM 100

int main(){
	int n, i, soma=0, v[TAM];
	printf("Digite o tamanho do vetor ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Digite o %dº número ", i+1);
		scanf("%d", &v[i]);
	}
	for(i=0;i<n;i++)
		soma+=v[i];
	printf("A soma do valores do vetor é %d\n", soma);
}

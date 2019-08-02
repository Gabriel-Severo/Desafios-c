#include <stdio.h>
#define TAM 100

int main(){
	int n, x, i, soma=0, v[TAM], f=0;
	printf("Digite o tamanho do vetor ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Digite o %dº número ", i+1);
		scanf("%d", &v[i]);
	}
	for(i=n-1;i>=0;i--)
		printf("%d ", v[i]);
}

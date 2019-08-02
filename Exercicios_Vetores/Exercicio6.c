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
	printf("Digite o valor para verificar se está contido no vetor ");
	scanf("%d", &x);
	for(i=0; i < n; i++)
		if(v[i]==n)
			f=1;
	if(f==1)
		printf("O número está contido no vetor\n");
	else
		printf("O número não está contido no vetor\n");
}

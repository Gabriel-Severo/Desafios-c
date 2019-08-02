#include <stdio.h>
#define TAM 100

int main(){
	int n, i, q=0;
	float v[TAM], x;
	printf("Digite o tamanho do vetor ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Digite o %dº número ", i+1);
		scanf("%f", &v[i]);
	}
	printf("Digite um número para buscar no intervalo ");
	scanf("%f", &x);
	for(i=0;i<n;i++)
		if(v[i]>x){
			printf("%.2f ", v[i]);
			q++;
		}
	printf("\nA quantidade de números no vetor maior que %.2f é %d\n", x, q);
}

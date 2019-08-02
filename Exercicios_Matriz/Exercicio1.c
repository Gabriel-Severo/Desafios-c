#include <stdio.h>
#define TAM 9

int main(){
	int v[TAM][TAM], i, j, n, menor, local=0;
	printf("Digite o tamanho da matriz ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			printf("Digite o valor da v[%d][%d] ", i, j);
			scanf("%d", &v[i][j]);
		}
	menor=v[0][0];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(menor>v[i][j]){
				menor=v[i][j];
				local = i;
			}
	printf("O menor número é o %d e está na linha %d ", menor, local);
}

#include <stdio.h>

int main(){
	int v[4][4], i, j, q=0;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++){
			printf("Digite o valor para v[%d][%d] ", i, j);
			scanf("%d", &v[i][j]);
		}
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			if(v[i][j]<0){
				v[i][j]=0;
				q++;
			}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++)
			printf("%d ", v[i][j]);
		printf("\n");
	}
	printf("A quantidade de números negativos é %d e a substituidos é %d\n", q, q);
}

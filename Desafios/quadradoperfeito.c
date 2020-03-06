#include <stdio.h>
#define TAMANHO 9
int main(){
	int matriz[TAMANHO][TAMANHO]={};
	int meio = TAMANHO / 2, x=0, y=meio, xVelho, yVelho, valor = 1;
	while(valor != TAMANHO * TAMANHO + 1){
		if (x == -1)
			x=TAMANHO-1;
		if(y == TAMANHO)
			y=0;
		if(matriz[x][y]!=0){
			x=xVelho;
			y=yVelho;
			x++;
		}
		xVelho=x;
		yVelho=y;
		matriz[x][y]=valor;
		x--;
		y++;
		valor++;
	}
	for (int i = 0; i < TAMANHO; i++){
		for (int j = 0; j < TAMANHO; j++)
			if (matriz[i][j] < 10)
				printf("0%d ", matriz[i][j]);
			else
				printf("%2.d ", matriz[i][j]);
		printf("\n");
	}
}

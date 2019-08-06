#include <stdio.h>
#include <stdlib.h>
void limparJogo(char jogadas[][3]){
	int i, j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			jogadas[i][j]=' ';
}
int isValida(char jogadas[][3], int linha, int coluna){
	if(jogadas[linha-1][coluna-1]==' ' && linha<=3&&linha>=1 && coluna<=3&&coluna>=1)
		return 1;
	else
		return -1;
}
int realizarJogada(char jogadas[][3], int jogador){
	int linha, coluna, valida=0;
	do{
		printf("Jogador %d: (linha coluna) ", jogador);
		scanf("%d %d", &linha, &coluna);
		valida=isValida(jogadas, linha, coluna);
		if(valida==-1)
			printf("Jogada inválida\n");
	}while(valida!=1);
	if(jogador==1){
		jogadas[linha-1][coluna-1]='X';
		return 2;
	}else 
		jogadas[linha-1][coluna-1]='O';
		return 1;
}
void mostrarJogo(char jogadas[][3]){
	int i, j;
	for(i=0;i<3;i++){
		printf("\n\t\t");
		for(j=0;j<3;j++){
			printf("%c", jogadas[i][j]);
			if(j<2)
				printf("|");
		}
		printf("\n");
		if(i<2)
			printf("\t\t_____\n");
	}
	printf("\n");
			
}
int finalizar(char jogadas[][3], int jogador){
	if(jogador==1){
		if(jogadas[0][0]=='X'&&jogadas[0][1]=='X'&&jogadas[0][2]=='X')
			return 1;
		else if(jogadas[1][0]=='X'&&jogadas[1][1]=='X'&&jogadas[1][2]=='X')
			return 1;
		else if(jogadas[2][0]=='X'&&jogadas[2][1]=='X'&&jogadas[2][2]=='X')
			return 1;
		else if(jogadas[0][0]=='X'&&jogadas[1][0]=='X'&&jogadas[2][0]=='X')
			return 1;
		else if(jogadas[0][1]=='X'&&jogadas[1][1]=='X'&&jogadas[2][1]=='X')
			return 1;
		else if(jogadas[0][2]=='X'&&jogadas[1][2]=='X'&&jogadas[2][2]=='X')
			return 1;
		else if(jogadas[0][0]=='X'&&jogadas[1][1]=='X'&&jogadas[2][2]=='X')
			return 1;
		else if(jogadas[0][2]=='X'&&jogadas[1][1]=='X'&&jogadas[2][0]=='X')
			return 1;
	}
	if(jogador==2){
		if(jogadas[0][0]=='O'&&jogadas[0][1]=='O'&&jogadas[0][2]=='O')
			return 1;
		else if(jogadas[1][0]=='O'&&jogadas[1][1]=='O'&&jogadas[1][2]=='O')
			return 1;
		else if(jogadas[2][0]=='O'&&jogadas[2][1]=='O'&&jogadas[2][2]=='O')
			return 1;
		else if(jogadas[0][0]=='O'&&jogadas[1][0]=='O'&&jogadas[2][0]=='O')
			return 1;
		else if(jogadas[0][1]=='O'&&jogadas[1][1]=='O'&&jogadas[2][1]=='O')
			return 1;
		else if(jogadas[0][2]=='O'&&jogadas[1][2]=='O'&&jogadas[2][2]=='O')
			return 1;
		else if(jogadas[0][0]=='O'&&jogadas[1][1]=='O'&&jogadas[2][2]=='O')
			return 1;
		else if(jogadas[0][2]=='O'&&jogadas[1][1]=='O'&&jogadas[2][0]=='O')
			return 1;
	}
	if(jogadas[0][0]!=' '&&jogadas[0][1]!=' '&&jogadas[0][2]!=' '&&
	jogadas[1][0]!=' '&&jogadas[1][1]!=' '&&jogadas[1][2]!=' '&&
	jogadas[2][0]!=' '&&jogadas[2][1]!=' '&&jogadas[2][2]!=' ')
		return 2;
	else
		return 0;
}
int main(){
	char jogadas[3][3]={};
	int jogador=1, jogadorAtual=jogador, finalizado=0;
	limparJogo(jogadas);
	while(finalizado!=1&&finalizado!=2){
		system("clear");
		printf("\tJOGO DA VELHA\n\tJogador 1: X\n\tJogador 2: O\n");
		mostrarJogo(jogadas);
		finalizado = finalizar(jogadas, jogadorAtual);
		if(finalizado==1){
			printf("Jogo finalizado\n");
			printf("Jogador %d ganhou!!\n", jogadorAtual);
		}else if(finalizado==0){
			jogadorAtual = jogador;
			jogador=realizarJogada(jogadas, jogador);
		}else if(finalizado==2)
			printf("Houve um empate\n");
	}
}

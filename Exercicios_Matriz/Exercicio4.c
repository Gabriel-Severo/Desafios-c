#include <stdio.h>
#include <stdlib.h>
int main(){
	int v[5][5], i, j, opc, l, soma=0, ln=0, cn=0, q=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++){
			printf("Digite o valor para v[%d][%d] ", i, j);
			scanf("%d", &v[i][j]);
		}
	printf("Digite uma opção para uma determinada funcionalidade\n");
	printf("1- Soma de uma linha\n2- Quantiade de linhas e colunas nulas\n3- A quantidade de elementos maiores que o valor informado.\n4- Buscar um valor na matriz.\n");
	scanf("%d", &opc);
	if(opc==1){
		printf("Digite a linha que você quer somar ");
		scanf("%d", &l);
		for(i=0;i<5;i++)
			soma+=v[l][i];
		printf("A soma é %d\n", soma);
	}else if(opc==2){
		for(i=0;i<5;i++){
			for(j=0;j<5;j++)
				if(v[i][j]==0)
					l++;
			if(l==5)
				ln++;
			l=0;
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++)
				if(v[j][i]==0)
					l++;
			if(l==5)
				cn++;
			l=0;
		}
		printf("A quantidade de linha nulas é %d e colunas nulas é %d", ln, cn);
	}else if(opc==3){
		printf("Digite um valor ");
		scanf("%d", &l);
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
				if(v[i][j]>l)
					q++;
		printf("A quantidade de números maior que o intervalo é de %d\n", q);
	}else
		printf("Digite um valor ");
		scanf("%d", &l);
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
				if(v[i][j]==l){
					ln=i;//Utilizei as variaveis da opção dois para não alocar mais variaveis
					cn=j;
				}
		printf("Valor encontrado na linha %d e coluna %d\n", ln, cn);
}

#include <stdio.h>
#define TAM 9

int main(){
	int v[TAM], i, j=0, k=8;
	for(i=0;i<9;i++)
		v[i]=i+1;
	while(j<5){
		for(i=0;i<9;i++)
			if(v[i]==0)
				printf("  ");
			else
				printf("%d ", v[i]);
		printf("\n");
		v[k] = 0;
		v[j] = 0;
		j++;
		k--;
	}
	printf("\n");
}

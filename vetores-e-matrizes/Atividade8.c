#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 4
int main(void) {
	int mat[TAMANHO][TAMANHO], x, l, c;
	
	for(l = 0; l < TAMANHO; l++) { 
		for(c = 0; c < TAMANHO; c++) {
			printf("Digite um numero [%d][%d]\n>> ", l+1, c+1);
			scanf("%d", &mat[l][c]);
			fflush(stdin);
		}
	}
	
	printf("Digite o valor de x\n>> ");
	scanf("%d", &x);
	fflush(stdin);
	
	int i;
	for(i = 0; i < TAMANHO; i++) {
		mat[i][i] *= x;
	}
	
	for(l = 0; l < TAMANHO; l++) { 
		for(c = 0; c < TAMANHO; c++) {
			printf("%d ", mat[l][c]);
			if(c == TAMANHO - 1){
				printf("\n");
			}
		}
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ma[5][5], mb[5][5], mr[5][5], l, c;
	
	for(l = 0; l < 5; l++) {
		for(c = 0; c < 5; c++) {
			printf("Digite um numero [%d][%d]\n>> ", l + 1, c + 1);
			scanf("%d", &ma[l][c]);
		}
	}
	
	for(l = 0; l < 5; l++) {
		for(c = 0; c < 5; c++) {
			printf("Digite um numero [%d][%d]\n>> ", l + 1, c + 1);
			scanf("%d", &mb[l][c]);
		}
	}
	
	for(l = 0; l < 5; l++) {
		for(c = 0; c < 5; c++) {
			mr[l][c] = ma[l][c] - mb[l][c];
		}
	}
	
	for(l = 0; l < 5; l++) {
		for(c = 0; c < 5; c++) {
			printf("%d - %d = %d\n", ma[l][c], mb[l][c], mr[l][c]);
		}
	}
	
	return 0;
}

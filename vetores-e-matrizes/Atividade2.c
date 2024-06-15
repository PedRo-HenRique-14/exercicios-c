#include <stdio.h>
#include <stdlib.h>

int main(void){
	int l, c, matA[3][3], matB[3][3], matSoma[3][3];
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("Digite um numero A: [l: %d][c: %d]\n>> ", l, c);
			scanf("%i", &matA[l][c]);
			fflush(stdin);
		}
	}
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("Digite um numero B: [l: %d][c: %d]\n>> ", l, c);
			scanf("%i", &matB[l][c]);
			fflush(stdin);
		}
	}
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			matSoma[l][c] = matA[l][c] + matB[l][c];
		}
	}
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			if(c < 2){
				printf("%d + %d = %d, ", matA[l][c], matB[l][c], matSoma[l][c]);	
			} else {
				printf("%d + %d = %d\n", matA[l][c], matB[l][c], matSoma[l][c]);
			}
		}
	}
	
	return 0;
}

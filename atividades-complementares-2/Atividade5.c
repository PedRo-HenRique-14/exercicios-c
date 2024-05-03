#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n;
	
	printf("Digite um numero: ");
	scanf("%f", &n);
	fflush(stdin);
	
	if(n - (int)n > 0) {
		printf("O numero %f e fracionario.", n);
	} else {
		printf("O numero %f e inteiro.", n);
	}
	return 0;
}

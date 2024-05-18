#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, num[10], soma = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite um numero [%d]\n>> ", i + 1);
		scanf("%i", &num[i]);
		soma += num[i];
	}
	
	for(i = 0; i < 9; i++){
		printf("%d + ", num[i]);
	}
	printf("%d\n", num[9]);
	printf("Soma: %d", soma);
	
	return 0;
}

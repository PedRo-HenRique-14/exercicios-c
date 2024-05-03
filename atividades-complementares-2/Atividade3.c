#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	fflush(stdin);
	
	if(n % 2 == 0){
		printf("%i e par.", n);
	} else {
		printf("%i e impar.", n);
	}
	return 0;
}

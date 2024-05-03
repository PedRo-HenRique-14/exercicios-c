#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	fflush(stdin);
	
	if(n % 2 == 0) {
		printf("%i e par: %i", n, n+1);
	} else {
		printf("%i e impar: %i", n, n+1);
	}
	return 0;
}

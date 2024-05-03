#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n1;
	
	printf("Digite um numero: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	if (n1 < 0) {
		printf("%f e negativo.", n1);
	} else if(n1 > 0) {
		printf("%f e positivo.", n1);
	} else {
		printf("%f e neutro.", n1);
	}
	return 0;
}

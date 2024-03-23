#include <stdio.h>
#include <stdio.h>

int main(void) {
	float n1, n2;
	
	printf("Digite um numero: ");
	scanf("%f", &n1);
	fflush(stdin);
	printf("Digite outro numero: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	if(n1 > n2) {
		printf("%f e o maior.", n1);
	}
	else {
		printf("%f e o maior.", n2);
	}
	return 0;
}

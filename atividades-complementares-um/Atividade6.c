#include <stdio.h>
#include <stdlib.h>
/* Construa um algoritmo que peça dois números, calcule e mostre a soma dos mesmos */
int main(void) {
	float n1, n2, r;
	
	printf("Informe um numero: ");
	scanf("%f", &n1);
	fflush(stdin);
	printf("Informe outro numero: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	r = n1 + n2;
	
	printf("A soma de %f com %f resulta em %f", n1, n2, r);
	return 0;
}
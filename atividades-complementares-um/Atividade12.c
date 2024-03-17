#include <stdio.h>
#include <stdlib.h>
/*
Construa um algoritmo que peça 2 números inteiros e um número real. Calcule e mostre: 
A: o produto do dobro do primeiro com metade do segundo . 
B: a soma do triplo do primeiro com o terceiro. 
C: o terceiro elevado ao cubo.
*/
int main(void) {
	int n1, n2;
	float n3, a, b, c;
	
	printf("Informe um numero inteiro: ");
	scanf("%i", &n1);
	fflush(stdin);
	printf("Informe outro numero inteiro: ");
	scanf("%i", &n2);
	fflush(stdin);
	printf("Informe um numero real: ");
	scanf("%f", &n3);
	fflush(stdin);
	
	a = (n1*2)*(n2/2);
	b = n1*3+n3;
	c = n3*n3*n3;
	
	printf("A: %f\nB: %f\nC: %f", a, b, c);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
/* Construa um algoritmo que converta metros para centímetros */
int main(void) {
	float metros;
	
	printf("Digite um valor em metros: ");
	scanf("%f", &metros);
	
	printf("%f metros equivalem a %f centimetros.", metros, metros*100);
	return 0;
}
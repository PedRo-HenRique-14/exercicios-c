#include <stdio.h>
#include <stdlib.h>
/* Construa um algoritmo que pe�a a temperatura em graus Farenheit(�F), transforme e mostre na tela a temperatura em graus Celsius(�C). C=5*(F-32)/9} */
int main(void) {
	float c, f;
	
	printf("Informe uma temperatura em Farenheit: ");
	scanf("%f", &f);
	fflush(stdin);
	
	c = 5*(f-32)/9;
	
	printf("%.1f grau(s) Farenheit equivalem a %.1f grau(s) Celsius.", f, c);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
/* Construa um algoritmo que pe�a uma temperatura em graus Celsius(�C), transforme e mostre na tela a temperatura em graus Farenheit(�F). */
int main(void) {
	float c, f;
	
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f", &c);
	fflush(stdin);
	
	f = (c*9/5)+32;
	
	printf("%.1f grau(s) Celsius equivalem a %.1f grau(s) Farenheit.", c, f);
	return 0;
}
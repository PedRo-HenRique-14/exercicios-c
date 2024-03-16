#include <stdio.h>
#include <stdlib.h>
/* Construa um algoritmo que calcule a área de um circulo */
int main(void) {
	float raio, area;
	
	printf("Informe o raio do circulo: ");
	scanf("%f", &raio);
	fflush(stdin);
	
	area = 3.14 * raio * raio;
	
	printf("A area do circulo e %f", area);
	return 0;
}
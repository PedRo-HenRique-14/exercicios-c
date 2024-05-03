#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero, centenas, dezenas, unidades;
	
	printf("Digite um numero menor do que 1000\n>> ");
	scanf("%i", &numero);
	fflush(stdin);
	
	printf("%i - ", numero);
	
	centenas = numero / 100;
	numero = numero - centenas * 100;
	
	dezenas = numero / 10;
	numero = numero - dezenas * 10;
	
	unidades = numero;
	
	printf("%i centenas, %i dezenas e %i unidades", centenas, dezenas, unidades);
	return 0;
}
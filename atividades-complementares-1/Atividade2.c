#include <stdio.h>
#include <stdlib.h>
/* Construa um programa que peça um número e então mostre a mensagem “O número informado foi  [número]“ */
int main(void) {
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	fflush(stdin);
	
	printf("O numero informado foi %i", numero);
	return 0;
}
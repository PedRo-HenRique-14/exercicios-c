#include <stdio.h>
#include <stdlib.h>
/* Construa um programa que pe�a um n�mero e ent�o mostre a mensagem �O n�mero informado foi  [n�mero]� */
int main(void) {
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	fflush(stdin);
	
	printf("O numero informado foi %i", numero);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	
	printf("Digite um numero.\n>> ");
	scanf("%i", &num);
	fflush(stdin);
	
	switch(num) {
		case 1:
			printf("Domingo.");
			break;
		case 2:
			printf("Segunda-feira.");
			break;
		case 3:
			printf("Terca-feira.");
			break;
		case 4:
			printf("Quarta-feira.");
			break;
		case 5:
			printf("Quinta-feira.");
			break;
		case 6:
			printf("Sexta-feira.");
			break;
		case 7:
			printf("Sabado.");
			break;
		default:
			printf("Valor invalido!");
			break;
	}
	return 0;
}
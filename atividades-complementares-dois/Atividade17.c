#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float lado1, lado2, lado3;
	
	printf("Digite o tamanho do primeiro lado do triangulo: ");
	scanf("%f", &lado1);
	fflush(stdin);
	
	printf("Digite o tamanho do segundo lado do triangulo: ");
	scanf("%f", &lado2);
	fflush(stdin);
	
	printf("Digite o tamanho do terceiro lado do triangulo: ");
	scanf("%f", &lado3);
	fflush(stdin);
	
	
	if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1) {
		printf("Os valores inseridos nao formam um triangulo!");
	} else if (lado1 == lado2 && lado2 == lado3) {
		printf("O triangulo e equilatero!");
	} else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
		printf("O triangulo e isosceles!");
	} else {
		printf("O triangulo e escaleno!");
	}
	
	return 0;
}
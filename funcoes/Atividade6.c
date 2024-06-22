#include <stdio.h>
#include <stdlib.h>

int tipoTriangulo(float a, float b, float c);

int main(void) {
	float a, b, c, tipo;
	
	printf("Digite o tamanho do lado A\n>> ");
	scanf("%i", &a);
	fflush(stdin);
	
	printf("Digite o tamanho do lado B\n>> ");
	scanf("%i", &b);
	fflush(stdin);
	
	printf("Digite o tamanho do lado C\n>> ");
	scanf("%i", &c);
	fflush(stdin);
	
	tipo = tipoTriangulo(a, b ,c);
	
	if(tipo == 0) {
		printf("Equilatero");
	} else if (tipo == 1) {
		printf("Isosceles");
	} else if (tipo == 2) {
		printf("Escaleno");
	} else {
		printf("Isso nao e um triangulo >:(");
	}
	
	return 0;
}

int tipoTriangulo(float a, float b, float c) {
	if(a+b > c && a+c > b && b+c > a) {
		if(a == b && b == c ) {
			return 0;
		} else if (a == c || a == b || b == c) {
			return 1;
		} else {
			return 2;
		}	
	}
	
	return 3;
}

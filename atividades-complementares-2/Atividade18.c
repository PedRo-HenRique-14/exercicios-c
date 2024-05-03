#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b, c, x1, x2, delta;
	
	printf("Insira os coeficientes (x^2 + b + c):");
	scanf("%f %f %f", &a, &b, &c);
	fflush(stdin);
	
	if(a == 0) {
		printf("Equacao invalida.");
		return 0;
	}
	
	delta = (b * b) - 4 * a * c;
	
	if(delta > 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("O delta e positivo.\n");
		printf("As raizes sao %.2f, %.2f.", x1, x2);
	} else if (delta == 0) {
		x1 = -b / (2 * a);
		printf("O delta e 0.\n");
		printf("A raiz e %.2f.", x1);
	} else {
		printf("O delta e negativo.\n");
		printf("A equacao nao possui raizes reais.");
	}
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
/* Construa um algoritmo que peça as 4 notas bimestrais e mostre a média, com uma casa decimal */
int main(void) {
	float nota1, nota2, nota3, nota4, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &nota1);
	fflush(stdin);
	printf("Insira a segunda nota: ");
	scanf("%f", &nota2);
	fflush(stdin);
	printf("Insira a terceira nota: ");
	scanf("%f", &nota3);
	fflush(stdin);
	printf("Insira a quarta nota: ");
	scanf("%f", &nota4);
	fflush(stdin);
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	printf("A media resulta em %.2f.", media);
	return 0;
}
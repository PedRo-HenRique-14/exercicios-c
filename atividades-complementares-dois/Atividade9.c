#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float nota1, nota2, nota3, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	fflush(stdin);
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	fflush(stdin);
	printf("Informe a terceira nota: ");
	scanf("%f", &nota3);
	fflush(stdin);
	
	media = (nota1+nota2+nota3)/3;
	
	if(media == 10) {
		printf("Aprovado com Distincao.");
	} else if(media >= 7) {
		printf("Aprovado.");
	} else {
		printf("Reprovado.");
	}
	return 0;
}

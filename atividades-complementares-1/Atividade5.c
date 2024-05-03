#include <stdio.h>
#include <stdlib.h>
/* Construa um algoritmo que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário */
int main(void) {
	float ladoQuadrado, areaQuadrado;
	
	printf("Informe o tamanho do lado do quadrado: ");
	scanf("%f", &ladoQuadrado);
	fflush(stdin);
	
	areaQuadrado = ladoQuadrado*ladoQuadrado;
	
	printf("A area de um quadrado de lado %f e %f, o dobro desta area e %f.", ladoQuadrado, areaQuadrado, areaQuadrado * 2);
	return 0;
}
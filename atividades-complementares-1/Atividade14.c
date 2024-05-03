#include <stdio.h>
#include <stdlib.h>
/*
Elabore um programa para calcular a quantidade necess�ria de latas de tinta para pintar uma parede com X metros
de largura por H metros de altura. Considere que o consumo de latas de tinta por metro quadrado � 3 litros e a
quantidade de tinta por lata � 3,6 litros.
*/
int main(void) {
	float x, h, qtdLatas;
	
	printf("Informe a largura da parede: ");
	scanf("%f", &x);
	fflush(stdin);
	printf("Informe a altura da parede: ");
	scanf("%f", &h);
	fflush(stdin);
	
	qtdLatas = ((x*h)*3)/3.6;
	
	/* A quantidade de latas recomendadas faz refer�ncia a quantidade de latas arredondando para cima. Por exemplo, n�o � poss�vel comprar 3.4 latas, ent�o � necess�rio comprar 4 latas de tintas */
	printf("Para pintar sua parede sao necessarias %.1f lata(s) de tinta, a quantidade de latas recomendadas e %i.", qtdLatas, (int)(qtdLatas + 1));
	return 0;
}
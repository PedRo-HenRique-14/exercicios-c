#include <stdio.h>
#include <stdlib.h>
/* Uma firma contrata um encanador a 25,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para o Imposto de Renda.  */
int main(void) {
	int diasTrabalhados;
	float salario;
	
	printf("Insira o numero de dias trabalhados: ");
	scanf("%i", &diasTrabalhados);
	fflush(stdin);
	
	salario = diasTrabalhados*25*0.92;
	
	printf("O salario a ser pago para o encanador (com desconto) e R$%.2f.", salario);
	return 0;
}
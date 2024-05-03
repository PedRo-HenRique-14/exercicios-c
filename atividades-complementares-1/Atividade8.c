#include <stdio.h>
#include <stdlib.h>
/* Construa um algoritmo que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês. */
int main(void) {
	float salarioHora;
	int horaTrabalho;
	
	printf("Insira o quanto voce recebe por hora: ");
	scanf("%f", &salarioHora);
	fflush(stdin);
	printf("Insira a quantidade de horas trabalhadas no mes: ");
	scanf("%i", &horaTrabalho);
	fflush(stdin);
	
	printf("Seu salario do mes vai ser de R$%.2f.", salarioHora*horaTrabalho);
	return 0;
}
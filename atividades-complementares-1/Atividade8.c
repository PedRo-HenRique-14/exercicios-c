#include <stdio.h>
#include <stdlib.h>
/* Construa um algoritmo que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s. */
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
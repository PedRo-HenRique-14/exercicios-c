#include <stdio.h>
#include <stdlib.h>
/*
Uma determinada empresa vende uma m�quina que possui seis motores. Um de 20 CV, dois de 1 CV, e tr�s de 5 CV,
que custam 1500, 300 e 600 reais respectivamente cada motor. Existe a necessidade de saber quantos motores 
dever�o ser comprados de cada modelo e quanto custar� esta compra. Para isto elabore um programa que:
A: Pergunte quantas m�quinas ser�o vendidas;
B: Calcule e apresente na tela a quantidade de motores que dever�o ser comprados de cada modelo;
C: Calcule e apresente na tela o custo total por m�quina, o custo por tipo de motor e o custo total da compra.
*/
int main(void) {
	int qtdMaquinas, qtdMotores20, qtdMotores1, qtdMotores5;
	float totalCompra;
	
	printf("Informe a quantidade de maquinas que serao vendidas: ");
	scanf("%i", &qtdMaquinas);
	fflush(stdin);
	
	qtdMotores20 = qtdMaquinas;
	qtdMotores1 = 2*qtdMaquinas;
	qtdMotores5 = 3*qtdMaquinas;
	
	totalCompra = (qtdMotores20*1500)+(qtdMotores1*300)+(qtdMotores5*600);
	
	printf("Quantidade de motores de 20 CV: %i;\nQuantidade de motores de 1 CV: %i;\nQuantidade de motores 5 CV: %i.\n", qtdMotores20, qtdMotores1, qtdMotores5);
	printf("Custo de cada maquina: R$2400.00;\nCusto de cada motor 20 CV: R$1500.00;\nCusto de cada motor 1 CV: R$300.00;\nCusto de cada motor 5 CV: R$600.00;\nValor total da compra: R$%.2f.", totalCompra);
	return 0;
}
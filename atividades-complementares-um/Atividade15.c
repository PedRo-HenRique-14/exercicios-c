#include <stdio.h>
#include <stdlib.h>
/* 
Construa um algoritmo que peça o salário bruto mensal de um funcionário, calcule e apresente os valores conforme modelo abaixo: 
Salário Bruto: R$  

(-) IR (15%): R$ 

(-) INSS (11%): R$ 

(-) Sindicato (3%): R$ 

Salário Liquido: R$ 
*/
int main(void) {
	float salarioBruto, salarioLiquido, ir, inss, sindicato;
	
	printf("Insira seu salario bruto: ");
	scanf("%f", &salarioBruto);
	fflush(stdin);
	
	ir = salarioBruto*0.15;
	inss = salarioBruto*0.11;
	sindicato = salarioBruto*0.03;
	salarioLiquido = salarioBruto-(ir+inss+sindicato);
	
	printf("IR: R$%.2f;\nINSS: R$%.2f;\nSindicato: R$%.2f;\nSalario Liquido: R$%.2f.", ir, inss, sindicato, salarioLiquido);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nota100, nota50, nota20, nota10, nota5, nota2, moeda1, valorTotal, resto;
	printf("Quanto deseja sacar?\n>> ");
	scanf("%i", &valorTotal);
	fflush(stdin);
	
	nota100 = valorTotal / 100;
	resto = valorTotal % 100;
	
	nota50 = resto / 50;
	resto %= 50;
	
	nota20 = resto / 20;
	resto %= 20;
	
	nota10 = resto / 10;
	resto %= 10;
	
	nota5 = resto / 5;
	resto %= 5;
	
	nota2 = resto / 2;
	resto %= 2;
	
	moeda1 = resto;
	
	printf("Notas:\n%i nota(s) de R$ 100.00\n%i nota(s) de R$ 50.00\n%i nota(s) de R$ 20.00\n%i nota(s) de R$ 10.00\n%i nota(s) de R$ 5.00\n%i nota(s) de R$ 2.00\n%i moeda(s) de R$ 1.00", nota100, nota50, nota20, nota10, nota5, nota2, moeda1);
	return 0;
}

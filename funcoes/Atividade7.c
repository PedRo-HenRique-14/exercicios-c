#include <stdio.h>
#include <stdlib.h>

void reajustaData(int d, int m, int a);

int main(void) {
	int dia, mes, ano;
	
	printf("Insira a data atual (dd/mm/aa)\n>>  ");
	scanf("%i%*c%i%*c%i", &dia, &mes, &ano);
	fflush(stdin);
	reajustaData(dia, mes, ano);
	return 0;
}

void reajustaData(int d, int m, int a) {
	d+=5;
	
	if((m!=2 && m!=4 && m!=6 && m!=9 && m!=11) && d > 31){
		
		d -= 31;
		m++;
		
	} else if((m==4 || m==6 || m==9 || m==11) && d > 30) {
		
		d -= 30;
		m++;
		
	} else if(m==2 && (a%4==0 && a%100!=0 || a%400==0) && d > 29) {
		d -=29;
		m++;
	} else if(m==2 && d > 28) {
		d-= 28;
		m++;
	}
	
	if(m > 12){
		m -= 12;
		a++;
	}
	
	printf("Nova data: %i/%i/%i", d, m, a);
}

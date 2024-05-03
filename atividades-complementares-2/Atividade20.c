#include <stdio.h>
#include <stdlib.h>

int main() {
	int dia, mes, ano;
	
	printf("Informe uma data (dd/mm/aaaa): ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	if (ano <= 0) {
	    printf("Ano invalido.");
	    return 0;
	}
	
	if (mes < 1 || mes > 12) {
	    printf("Mes invalido.");
	    return 0;
	}
	
	if (dia < 1 || dia > 31) {
	    printf("Dia invalido.");
	    return 0;
	}
	
	if (mes == 2) {
	    if (ano % 4 == 0) {
	        if (dia > 29) {
	            printf("Data invalida.");
	            return 0;
	        }
	    } else {
	        if (dia > 28) {
	            printf("Data invalida.");
	            return 0;
	        }
	    }
	} else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
	    printf("Data invalida.");
	    return 0;
	}
	
	printf("Data valida.");
	
	return 0;
}
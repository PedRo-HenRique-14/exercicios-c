#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int infecPulmao, temperatura, coriza, espirros;
	
	printf("Infeccao nos pulmoes?\n0 - nao\n1- sim\n>> ");
	scanf("%i", &infecPulmao);
	fflush(stdin);
	
	printf("Temperatura anormal?\n 0 - nao\n1 - sim\n>> ");
	scanf("%i", &temperatura);
	fflush(stdin);
	
	printf("Coriza?\n0 - nao\n1- sim\n>> ");
	scanf("%i", &coriza);
	fflush(stdin);
	
	printf("Espirros?\n0 - nao\n1 - sim\n>> ");
	scanf("%i", &espirros);
	fflush(stdin);
	
	if(infecPulmao > 1 || temperatura > 1 || coriza > 1 || espirros > 1) {
		printf("Sintomas invalidos.");
		return 0;
	} else if (infecPulmao < 0 || temperatura < 0 || coriza < 0 || espirros < 0) {
		printf("Sintomas invalidos");
		return 0;
	}
	
	if(infecPulmao == 1 && temperatura == 1){
		printf("Pneumonia.");
	} else if (infecPulmao+temperatura+coriza+espirros == 1) {
		printf("Resfriado.");
	} else if (coriza == 1 && espirros == 1 && ((infecPulmao == 1 && temperatura == 0) || (infecPulmao == 0 && temperatura == 1) || (infecPulmao == 0 && temperatura == 0))) {
		printf("Gripe.");
	}
	return 0;
}
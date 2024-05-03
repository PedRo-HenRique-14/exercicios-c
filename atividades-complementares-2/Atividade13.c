#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char turno;
	
	printf("Qual o seu turno?\n");
	printf("-------------------\n");
	printf("[m] - Matutino\n[v] - Vespertino\n[n] - Noturno\n");
	printf("-------------------\n");
	printf(">> ");
	scanf("%c", &turno);
	fflush(stdin);
	
	switch(turno) {
		case'm': case 'M':
			printf("Bom dia!");
			break;
		case 'v': case 'V':
			printf("Boa tarde!");
			break;
		case 'n': case 'N':
			printf("Boa noite!");
			break;
		default:
			printf("Opcao invalida.");
			break;
	}
	return 0;
}
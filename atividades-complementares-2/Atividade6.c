#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char letra;
	
	printf("Digite f para feminino, ou m para masculino: ");
	scanf("%c", &letra);
	fflush(stdin);
	
	switch(letra) {
		case 'm': case 'M':
			printf("Masculino.");
			break;
		case 'f': case 'F':
			printf("Feminino.");
			break;
		default:
			printf("Selecao invalida.");
	}
	return 0;
}

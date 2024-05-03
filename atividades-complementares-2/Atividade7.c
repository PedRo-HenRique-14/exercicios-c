#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char letra;
	
	printf("Dgite uma letra (minusculo): ");
	scanf("%c", &letra);
	fflush(stdin);
	
	switch(letra) {
		case 'a':
			printf("Vogal.");
			break;
		case 'e':
			printf("Vogal.");
			break;
		case 'i':
			printf("Vogal.");
			break;
		case 'o':
			printf("Vogal.");
			break;
		case 'u':
			printf("Vogal.");
			break;
		default:
			printf("Consoante.");
	}
	return 0;
}

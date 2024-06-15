#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char palavras[15][30];
	int i;
	
	for(i = 0; i < 15; i++) {
		printf("Digite uma palavra [%d]\n>> ", i);
		gets(palavras[i]);
	}
	
	for(i = 10; i>0; i--) {
		printf("%s\n", palavras[i]);
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

//prototipo de funcao
int parImparCheck(int n);

int main (void) {
	int n;
	printf("Digite um numero\n>> ");
	scanf("%i", &n);
	fflush(stdin);
	
	if(parImparCheck(n)) {
		printf("Impar"); 
	} else {
		printf("Par");
	}
	
	return 0;
}

int parImparCheck(int n) {
	return n%2;
}

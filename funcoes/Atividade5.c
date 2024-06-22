#include <stdio.h>
#include <stdlib.h>

void funcA();
void funcB();
void funcC();
void funcD();

int main(void){
	char opt;
	
	do {
		
		printf("[ a ] S = 1/1 + 3/2 + 5/3 +.......+ 99/50\n[ b ] S = 1/1 - 2/2 + 3/3 -.......\n");
		printf("Digite uma opcao\n>> ");
		scanf("%c", &opt);
		fflush(stdin);
		
	} while(opt != 'f');
	printf("Saindo...");
}

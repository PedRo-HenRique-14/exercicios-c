#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n1, n2, n3, x = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	fflush(stdin);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);
	fflush(stdin);
	
	printf("Digite o terceiro numero: ");
	scanf("%i", &n3);
	fflush(stdin);
	
	if (n1 > n2) {
        x = n1;
        n1 = n2;
        n2 = x;
    }
    if (n2 > n3) {
        x = n2;
        n2 = n3;
        n3 = x;
    }
    if (n1 > n2) {
        x = n1;
        n1 = n2;
        n2 = x;
    }

    printf("Ordem: %i, %i, %i.", n1, n2, n3);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ano;
	
	printf("Insira um ano: ");
	scanf("%i", &ano);
	
	if(ano % 4 == 0){
		if(ano % 100 == 0) {
			if(ano % 400 == 0){
				printf("O ano %i e bissexto.", ano);
			} else {
				printf("O ano %i nao e bissexto.", ano);
			}
		} else {
			printf("O ano %i e bissexto.", ano);
		}
	} else {
		printf("O ano %i nao e bissexto.", ano);
	}
	
	return 0;
}
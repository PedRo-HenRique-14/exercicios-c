#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int temperaturaTrabalho;

	printf("Digite a temperatura que o aluminio devera ser trabalhado: ");
	scanf("%i", &temperaturaTrabalho);
	
	if(temperaturaTrabalho <= 500 || temperaturaTrabalho >=1000){
		
		printf("Temperatura invalida");
		
	} else if (temperaturaTrabalho > 500 && temperaturaTrabalho < 700) {
		
		printf("Aquecimento Ligado em 100%%");
		
	} else if (temperaturaTrabalho < 735) {
		
		printf("Aquecimento Ligado em 50%%");
		
	} else if (temperaturaTrabalho >= 735) {
		
		printf("Aquecimento Desligado\n");
		
		if (temperaturaTrabalho > 780) {
				
			printf("SUPERAQUECIMENTO");
				
		}
	}
	
	return 0;
}
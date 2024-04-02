#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n1, n2, resultado;
	int select;
	
	printf("Selecione uma opera??o:\n");
	printf("[1]- Adicao\n[2]- Subtracao\n[3]- Multiplicacao\n[4]- Divisao\n[5]- Fim\n");
	printf(">> ");
	scanf("%i", &select);
	fflush(stdin);
	
	switch(select) {
		case 1:
			printf("ADICAO\n\n");
			printf("Digite um numero:\n>> ");
			scanf("%f", &n1);
			fflush(stdin);
			printf("Digite outro numero:\n>> ");
			scanf("%f", &n2);
			fflush(stdin);
			
			resultado = n1 + n2;
			
			printf("O resultado da soma de %f por %f e %f", n1, n2, resultado);
			break;
		case 2:
			printf("SUBTRACAO\n\n");
			printf("Digite um numero:\n>> ");
			scanf("%f", &n1);
			fflush(stdin);
			printf("Digite outro numero:\n>> ");
			scanf("%f", &n2);
			fflush(stdin);
			
			resultado = n1 - n2;
			
			printf("O resultado da subtracao de %f por %f e %f", n1, n2, resultado);
			break;
		case 3:
			printf("MULTIPLICACAO\n\n");
			printf("Digite um numero:\n>> ");
			scanf("%f", &n1);
			fflush(stdin);
			printf("Digite outro numero:\n>> ");
			scanf("%f", &n2);
			fflush(stdin);
			
			resultado = n1 * n2;
			
			printf("O resultado da multiplicacao de %f por %f e %f", n1, n2, resultado);
			break;
		case 4:
			printf("DIVISAO\n\n");
			printf("Digite um numero:\n>> ");
			scanf("%f", &n1);
			fflush(stdin);
			printf("Digite outro numero:\n>> ");
			scanf("%f", &n2);
			fflush(stdin);
			
			if(n1 == 0) {
				printf("E impossivel dividir 0 por %f", n2);
				break;
			} else if(n2 == 0) {
				printf("E impossivel dividir %f por 0", n1);
				break;
			} else {
				resultado = n1/n2;
			}
			
			printf("O resultado da divisao de %f por %f e %f", n1, n2, resultado);
			break;
		case 5:
			printf("Saindo...");
			break;
		default:
			printf("Opcao invalida!");
			break;
	}
	return 0;
}
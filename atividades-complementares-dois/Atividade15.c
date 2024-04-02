#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float precoCusto;
	int codigoOrigem;
	
	printf("Digite o preco de custo do produto: ");
	scanf("%f", &precoCusto);
	fflush(stdin);
	
	printf("Digite o codigo de origem do produto\n1 - Sul\n2 - Norte\n3 - Leste\n4 - Oeste\n5 ou 6 - Nordeste\n7 ou 8 - Centro-oeste\n>> ");
	scanf("%i", &codigoOrigem);
	fflush(stdin);
	
	printf("Preco do produto: R$ %.2f", precoCusto);

	switch (codigoOrigem) {
	case 1:
		printf(" (Sul)");
		break;
	case 2:
		printf(" (Norte)");
		break;
	case 3:
		printf(" (Leste)");
		break;
	case 4:
		printf(" (Oeste)");
		break;
	case 5: case 6:
		printf(" (Nordeste)");
		break;
	case 7: case 8:
		printf(" (Centro-oeste)");
		break;
	default:
		printf(" (Importado)");
		break;
	}

	return 0;
}
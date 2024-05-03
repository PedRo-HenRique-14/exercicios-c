#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int select;
	float b, a, r, l, lmaior, lmenor, area;
	
	printf("Selecione uma opcao:\n");
	printf("-----------------------\n");
	printf("[1]- Area do Retangulo\n[2]- Area do Triangulo\n[3]- Area do Circulo\n[4]- Area do Quadrado\n[5]- Area do Trapezio\n[6]- Sair\n");
	printf("-----------------------\n");
	printf(">> ");
	scanf("%i", &select);
	fflush(stdin);
	printf("\n");
	
	switch(select) {
		case 1:
			printf("+-------------------+\n");
			printf("| Area do Retangulo |\n");
			printf("+-------------------+\n");
			printf("Base >> ");
			scanf("%f", &b);
			fflush(stdin);
			printf("Altura >> ");
			scanf("%f", &a);
			fflush(stdin);
			if(a == 0 || b == 0){
				printf("Impossivel calcular a area. Ambos os parametros devem ser diferentes de 0.");
				break;
			}
			area = b*a;
			printf("Area: %.2f.", area);
			break;
		case 2:
			printf("+-------------------+\n");
			printf("| Area do Triangulo |\n");
			printf("+-------------------+\n");
			printf("Base >> ");
			scanf("%f", &b);
			fflush(stdin);
			printf("Altura >> ");
			scanf("%f", &a);
			fflush(stdin);
			if(a == 0 || b == 0){
				printf("Impossivel calcular a area. Ambos os parametros devem ser diferentes de 0.");
				break;
			}
			area = b*a/2;
			printf("Area: %.2f.", area);
			break;
		case 3:
			printf("+-----------------+\n");
			printf("| Area do Circulo |\n");
			printf("+-----------------+\n");
			printf("Raio >> ");
			scanf("%f", &r);
			fflush(stdin);
			if(r == 0) {
				printf("Impossivel calcular a area do circulo com raio 0.");
				break;
			}
			area = 2*r*r*3.14;
			printf("Area: %.2f.", area);
			break;
		case 4:
			printf("+------------------+\n");
			printf("| Area do Quadrado |\n");
			printf("+------------------+\n");
			printf("Lado >> ");
			scanf("%f", &l);
			fflush(stdin);
			if(l == 0) {
				printf("Impossivel calcular a area do quadrado com lado 0.");
				break;
			}
			area = l*l;
			printf("Area: %.2f.", area);
			break;
		case 5:
			printf("+------------------+\n");
			printf("| Area do Trapezio |\n");
			printf("+------------------+\n");
			printf("Lado maior >> ");
			scanf("%f", &lmaior);
			fflush(stdin);
			printf("Lado menor >> ");
			scanf("%f", &lmenor);
			fflush(stdin);
			printf("Altura >> ");
			scanf("%f", &a);
			fflush(stdin);
			if(lmenor == 0 || lmaior == 0 || a == 0) {
				printf("Impossivel calcular a area. Ambos os paramentros devem ser diferentes de 0.");
				break;
			}
			area = (lmaior + lmenor) * a / 2;
			printf("Area: %.2f.", area);
			break;
		case 6:
			printf("Saindo...");
			break;
		default:
			printf("Opcao invalida!");
			break;
	}
}
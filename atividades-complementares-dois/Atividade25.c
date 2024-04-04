#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int selecao;
	float param1, param2;
	
	printf("Selecione uma opcao\n");
	printf("1- Mertros para centimetros\n");
	printf("2- Centimetros para metros\n");
	printf("3- Dias para horas\n");
	printf("4- Horas para dias\n");
	printf("5- Km/h para milhas/h\n");
	printf("6- Milhas/h para km/h\n");
	printf("7- Celsius para Fahrenheit\n");
	printf("8- Fahrenheit para Celsius\n");
	printf("9- Kg para arroba\n");
	printf("10- Arroba para kg\n");
	printf("11- Polegada para cm\n");
	printf("12- Cm para polegada\n");
	printf("13- Palmo para cm\n");
	printf("14- Cm para palmo\n");
	printf("15- Pe para cm\n");
	printf("16- Cm para pe\n");
	printf("17- No para km/h\n");
	printf("18- Km/h para no\n");
	printf("19- Covado para cm\n");
	printf("20- Cm para covado\n");
	printf(">> ");
	
	scanf("%i", &selecao);
	fflush(stdin);
	
	switch(selecao) {
		case 1:
			//Metros para centimetros
			printf("Digite um numero em metros\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 * 100;
			printf("%.2f metros sao %.2f centimetros.", param1, param2);
			break;
			
		case 2:
			//Centimetros para metros
			printf("Digite um numero em centimetros\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 / 100;
			printf("%.2f centimetros sao %.3f metros.", param1, param2);
			break;
			
		case 3:
			//Dias para horas
			printf("Digite um valor em dias\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 * 24;
			printf("%.1f dias sao %.1f horas.", param1, param2);
			break;
		
		case 4:
			//Horas para dias
			printf("Digite um valor em horas\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 / 24;
			printf("%.1f horas sao %.1f dias.", param1, param2);
			break;
		
		case 5:
			//Km/h para milhas/h
			printf("Digite um valor em Km/h\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 / 1.609;
			printf("%.1f km/h sao %.1f milhas/h.", param1, param2);
			break;
			
		case 6:
			//Milhas/h para km/h
			printf("Digite um valor em milhas/h\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 * 1.609;
			printf("%.1f milhas/h sao %.1f km/h.", param1, param2);
			break;
			
		case 7:
			//Celsius para Fahrenheit
			printf("Digite um valor em Celsius\>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = (param1*9/5)+32;
			printf("%.1f graus Celsius sao %.1f graus Fahrenheit.", param1, param2);
			break;
		
		case 8:
			//Fahrenheit para celsius
			printf("Digite um valor em Fahrenheit\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = 5*(param1-32)/9;
			printf("%.1f graus Fahrenheit sao %.1f graus Celsius.", param1, param2);
			break;
		
		case 9:
			//Kg pra arroba
			printf("Digite um valor em kg\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 / 15;
			printf("%.2f kg sao %.2f arrobas.", param1, param2);
			break;
		
		case 10:
			//Arroba para kg
			printf("Digite um valor em arroba\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 * 15;
			printf("%.2f arrobas sao %.2f kg.", param1, param2);
			break;
		
		case 11:
			//Polegada para centimetros
			printf("Digite um valor em polegadas\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 * 2.75;
			printf("%.2f polegadas sao %.2f cm.", param1, param2);
			break;
		
		case 12:
			//Cemtimetros para polegadas
			printf("Digite um valor em cm\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 / 2.75;
			printf("%.2f cm sao %.2f polegadas.", param1, param2);
			break;
		
		case 13:
			//Palmo para cm
			printf("Digite um valor em palmo\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 * 22.86;
			printf("%.2f palmos sao %.2f cm.", param1, param2);
			break;
		
		case 14:
			//Cm para palmo
			printf("Digite um valor em cm\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 / 22.86;
			printf("%.2f kg sao %.2f arrobas.", param1, param2);
			break;
		
		case 15:
			//Pe para cm
			printf("Digite um valor em pe\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 * 30.48;
			printf("%.2f pes sao %.2f cm.", param1, param2);
			break;
		
		case 16:
			//Cm para pes
			printf("Digite um valor em cm\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 / 30.48;
			printf("%.2f kg sao %.2f arrobas.", param1, param2);
			break;
		
		case 17:
			//No para km/h
			printf("Digite um valor em No\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 * 1.852;
			printf("%.2f Nos sao %.2f km/h.", param1, param2);
			break;
		
		case 18:
			//Km/h para Nos
			printf("Digite um valor em km/h\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 / 1.852;
			printf("%.2f km/h sao %.2f Nos.", param1, param2);
			break;
		
		case 19:
			//Covado para cm
			printf("Digite um valor em covado\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 * 66;
			printf("%.2f covados sao %.2f cm.", param1, param2);
			break;
		
		case 20:
			//Cm para covado
			printf("Digite um valor em cm\n>> ");
			scanf("%f", &param1);
			fflush(stdin);
			param2 = param1 / 66;
			printf("%.2f cm sao %.2f covados.", param1, param2);
			break;
	}
	
	return 0;
}
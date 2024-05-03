#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int selecao;
	
	printf("Escolha uma opcao\n1- Mamiferos\n2- Aves\n3- Repteis\n>> ");
	scanf("%i", &selecao);
	fflush(stdin);
	
	switch(selecao) {
		case 1:
			//Maifero
			printf("Escolha uma opcao\n1- Quadrupede\n2- Bipede\n3- Voadores\n4- Aquaticos\n>> ");
			scanf("%i", &selecao);
			fflush(stdin);
			
			switch(selecao) {
				case 1:
					//Quadrupede
					printf("Escolha uma opcao\n1- Carnivoro\n2- Herbivoro\n>> ");
					scanf("%i", &selecao);
					fflush(stdin);
					
					if(selecao == 1) {
						//Carnivoro
						printf("Animal: Leao.");
					} else if (selecao == 2){
						//Herbivoro
						printf("Animal: Cavalo.");
					
					} else {
						printf("Selecao invalida.");
					}
					break;
					
				case 2:
					//Bipede
					printf("Escolha uma opcao\n1- Onivoro\n2- Frutifero\n>> ");
					scanf("%i", &selecao);
					fflush(stdin);
					
					if(selecao == 1) {
						//Onivoro
						printf("Animal: Homem.");
					} else if (selecao == 2){
						//Frutifero
						printf("Animal: Macaco.");
					
					} else {
						printf("Selecao invalida.");
					}
					break;
					
				case 3:
					//Voadores
					printf("Animal: Morcego.");
					break;
					
				case 4:
					//Aquaticos
					printf("Animal: Baleia.");
					break;
					
				default:
					printf("Selecao invalida.");
					break;
			}
			
			break;
		
		case 2:
			//Aves
			printf("Escolha uma opcao\n1- Nao voadoras\n2- Nadadoras\n3- De rapina\n>> ");
			scanf("%i", &selecao);
			fflush(stdin);
			
			switch(selecao) {
				case 1:
					//Nao voadoras
					printf("Escolha uma opcao\n1- Tropical\n2- Polar\n>> ");
					scanf("%i", &selecao);
					fflush(stdin);
					
					if(selecao == 1) {
						//Tropical
						printf("Animal: Avestruz.");
					} else if (selecao == 2){
						//Polar
						printf("Animal: Pinguim.");
					
					} else {
						printf("Selecao invalida.");
					}
					break;
					
				case 2:
					//Nadadoras
					printf("Animal: Pato.");
					break;
				
				case 3:
					//De rapina
					printf("Animal: Aguia.");
					break;
					
				default:
					printf("Selecao invalida.");
					break;
				
			}
			break;
		
		case 3:
			//Repiteis
			printf("Selecione uma opcao\n1- Com casco\n2- Carnivoros\n3- Sem patas\n>> ");
			scanf("%i", &selecao);
			fflush(stdin);
			
			
			if(selecao == 1) {
				//Com casco
				printf("Animal: Tartaruga.");
			} else if (selecao == 2){
				//Carnivoros
				printf("Animal: Crocodilo.");
			
			} else if(selecao == 3){
				//Sem patas
				printf("Animal: Cobra");
			} else {
				printf("Selecao invalida.");
			}
			break;
			
		default:
			printf("Selecao invalida.");
			break;	
	
	}		
	return 0;
}
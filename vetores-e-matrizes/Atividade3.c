#include <stdio.h>
#include <stdlib.h>

int main(void){
	float num[5], soma = 0, multi = 1;
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite um numero [%d]\n>> ", i);
		scanf("%f", &num[i]);
		fflush(stdin);
		soma += num[i];
		multi *= num[i];
	}
	
	for(i = 0; i < 5; i++){
		if(i == 4){
			printf("%.2f\n", num[i]);
		} else {
			printf("%.2f + ", num[i]);
		}
	}
	
	for(i = 0; i < 5; i++){
		if(i == 4){
			printf("%.2f\n", num[i]);
		} else {
			printf("%.2f * ", num[i]);
		}
	}
	
	printf("Soma: %.2f\nMultiplicacao: %.2f", soma, multi);
	
	return 0;
}

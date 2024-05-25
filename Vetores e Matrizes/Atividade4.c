#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float nums[5], soma=0, mult=1;
	int x;
	
	for(x =0; x < 5; x++) {
		printf("Digite um numero [%d]\n>> ", x);
		scanf("%f", &nums[x]);
		soma+=nums[x];
		mult*=nums[x];
	}
	
	printf("Soma: %.2f\nMultiplicacao: %.2f\n", soma, mult);
	printf("Numeros:\n");
	for(x = 0; x < 5; x++) {
		printf("%.2f\n", nums[x]);
	}
	
	
	
	return 0;
}

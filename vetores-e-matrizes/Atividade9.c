#include <stdio.h>
#include <stdlib.h>

#define TAM 20
int main(void) {
	int n[TAM], x;
	
	for(int i=0; i < TAM; i++) {
		printf("Digite um numero [%d]\n>> ", i+1);
		scanf("%d", &n[i]);
	}
	
	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < TAM-1; j++) {
			if(n[j] > n[j+1]){
				x = n[j];
				n[j] = n[j+1];
				n[j+1] = x;
			}
		}
	}
	
	for(int i=0; i < TAM; i++){
		printf("%d\n", n[i]);
	}
	
	return 0;
}
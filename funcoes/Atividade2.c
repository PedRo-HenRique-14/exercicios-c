#include <stdlib.h>
#include <stdio.h>

//prototipo de funcao
void limpar_tela(void); //sem entrada e sem saida
int soma(int n1, int n2); //com entrada e com saida
void escreva(int n); //com entrada e sem saida
int saida(void); //sem entrada e com saida

int main(void){
	limpar_tela();
	escreva(soma(saida(),saida()));
	return 0;
}

void limpar_tela(void) {
	system("color 71");
	system("cls");
}

int soma(int n1, int n2) {
	return n1 + n2;
}

void escreva(int n) {
	printf("%i", n);
}

int saida(void) {
	int n;
	printf("Digite um numero\n>> ");
	scanf("%i", &n);
	return n;
}

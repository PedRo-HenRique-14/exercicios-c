#include <stdlib.h>

void limpar_tela(void);
int main(void){
	limpar_tela();
	return 0;
}

void limpar_tela(void) {
	system("color 71");
	system("cls");
}

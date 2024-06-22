#include <stdio.h>
#include <stdlib.h>

//prototipo da funcao
void desenhe(char c, int n);

int main(void){
	desenhe('o', 10);
}

void desenhe(char c, int n) {
	int l, i;
	for(l=1;l<=n;l++){
		for(i=1;i<=120;i++){
			printf("%c", c);
		}
	}
	
	return 0;
}

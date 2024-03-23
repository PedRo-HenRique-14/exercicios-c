#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int idade1, idade2, idade3, idade4, media;
	
	printf("Informe a idade do primeiro aluno: ");
	scanf("%i", &idade1);
	fflush(stdin);
	
	printf("Informe a idade do segundo aluno: ");
	scanf("%i", &idade2);
	fflush(stdin);
	
	printf("Informe a idade do terceiro aluno: ");
	scanf("%i", &idade3);
	fflush(stdin);
	
	printf("Informe a idade do quarto aluno: ");
	scanf("%i", &idade4);
	fflush(stdin);
	
	media = (idade1+idade2+idade3+idade4)/4;
	
	if(media < 25) {
		printf("Turma Jovem.");
	} else if(media >= 25 && media <= 40) {
		printf("Turma Adulta");
	} else {
		printf("Turma Idosa");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Condição Simples

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, media;
	
	printf("\nInforme a nota da Prova 1: ");
	scanf("%f", &n1);
	
	printf("\nInforme a nota da Prova 2: ");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	printf("\n================================\n");
	
	printf("\nA sua média é : %.2f", media);
	
	if(media < 7){
		printf("\nVocê está REPROVADO!\n");
	}
	
	return 0;
}


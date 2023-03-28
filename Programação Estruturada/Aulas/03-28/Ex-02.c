/*
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 28/03/2023

EXERCÍCIO 2- Crie um programa que peça ao usuário para entrar com 4 notas de um aluno, 
			calcule sua média e retorne o valor dessa média calculada.;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float nota, media, total=0;
	
	for(i=1;i<=4;i++){
		printf("Informe a %dª nota: ", i);
		scanf("%f", &nota);
		total = total + nota;
	}
	
	media = total/4;
	
	printf("\nA média do aluno é: %.2f.", media);
	
	return 0;
}

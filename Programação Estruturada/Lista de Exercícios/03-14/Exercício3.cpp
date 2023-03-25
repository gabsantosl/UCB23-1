/*
GABRIELA DOS SANTOS LEITE
LISTA DE EXERCÍCIOS 14/03/2023

EXERCÍCIO 03- Faça um programa que recebe a idade de uma pessoa e se a idade for menor que 30 aparece a
			  mensagem "Você é muito jovem".  Caso a idade for maior que 30 anos, o programa não fará nada.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;

	printf("\nInforme a sua idade: ");
	scanf("%d", &idade);

	if(idade<30){
		printf("\nVocê é muito jovem.\n");
	}
	
	return 0;
}
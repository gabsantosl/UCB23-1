/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERCÍCIOS 14/03/2023

EXERCÍCIO 04- Faça um programa que entra com a idade de uma pessoa e se a idade for maior que 70 anos, aparece
			  a mensagem "Velho". Se a idade for maior que 21 anos, "Adulto". Se a idade for menor que 21, "Jovem".*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;

	printf("\nInforme a sua idade: ");
	scanf("%d", &idade);

	if(idade>70){
		printf("\nVelho.");
	}else{
		if(idade>21){
			printf("\nAdulto.");
		}else{
			printf("\nJovem.");
		}
	}

	return 0;
}

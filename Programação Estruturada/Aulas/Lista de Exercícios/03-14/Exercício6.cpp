/*
GABRIELA DOS SANTOS LEITE
LISTA DE EXERCÍCIOS 14/03/2023

EXERCÍCIO 06- Faça um algoritmo receber um valor inteiro e se o número for maior que 10, será impressa
			  a frase: "O número é maior que 10.". Se o número for menor que 10, será impressa a frase:
			  "O número é menor que 10.". Se o número for igual a 10 aparecerá a frase: "Você acertou".*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num;

	printf("\nInforme um algoritmo: ");
	scanf("%d", &num);

	if(num > 10){
		printf("\nO número é maior que 10.");
	}else{
		if(num < 10){
			printf("\nO número é menor que 10.");
		}else{
			printf("\nVocê acertou!");
		}
	}
	
	return 0;
}
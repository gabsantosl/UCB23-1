/*
GABRIELA DOS SANTOS LEITE
LISTA DE EXERCÍCIOS 14/03/2023

EXERCÍCIO 01- Programa que calcule a média de 5 notas de um aluno.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, n3, n4, n5, media;

	printf("\nCalcule a sua média!\n\n");

	printf("Informe a sua primeira nota: ");
	scanf("%f", &n1);
	printf("Informe a sua segunda nota: ");
	scanf("%f", &n2);
	printf("Informe a sua terceira nota: ");
	scanf("%f", &n3);
	printf("Informe a sua quarta nota: ");
	scanf("%f", &n4);
	printf("Informe a sua quinta nota: ");
	scanf("%f", &n5);

	media = (n1+n2+n3+n4+n5)/5;

	printf("\nSua média é: %.2f\n", media);
	
	return 0;
}
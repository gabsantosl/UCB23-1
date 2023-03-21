/*
GABRIELA DOS SANTOS LEITE
LISTA DE EXERCÍCIOS 14/03/2023

EXERCÍCIO 02- Um programa que calcule a área do triângulo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"Portuguese");

	float base, altu, area;
	
	printf("\n========= Área do triângulo =========\n");

	printf("\nInforme o valor da base do triângulo: ");
	scanf("%f", &base);
	printf("Informe o valor da altura do triângulo: ");
	scanf("%f", &altu);

	area = (base+altu)/2;

	printf("\nA área do triângulo equivale a %.2fcm.\n", area);
	
	return 0;
}
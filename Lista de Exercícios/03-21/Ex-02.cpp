/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 21/03/2023

EXERCÍCIO 02- Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a 
soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, SOMA;
	
	printf("\n");
	
	printf("Atribua valor à variável A: ");
	scanf("%d", &A);
	
	printf("Atribua valor à variável B: ");
	scanf("%d", &B);
	
	SOMA = A +B;
	
	printf("\nSOMA = %d\n", SOMA);
	
	return 0;
}

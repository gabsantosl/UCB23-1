/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERC�CIOS 21/03/2023

EXERC�CIO 04- Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferen�a do 
produto de A e B pelo produto de C e D segundo a f�rmula: DIFERENCA = (A * B - C * D). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, D, DIFERENCA;
	
	printf("\n");
	
	printf("Atribua valor � vari�vel A: ");
	scanf("%d", &A);
	
	printf("Atribua valor � vari�vel B: ");
	scanf("%d", &B);
	
	printf("Atribua valor � vari�vel C: ");
	scanf("%d", &C);
	
	printf("Atribua valor � vari�vel D: ");
	scanf("%d", &D);
	
	DIFERENCA = (A * B - C * D);
	
	printf("\nDIFEREN�A = %d\n", DIFERENCA);
	
	return 0;
}
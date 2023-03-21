#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do 
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D). */

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C, D, DIFERENCA;
	
	printf("\n");
	
	printf("Atribua valor à variável A: ");
	scanf("%d", &A);
	
	printf("Atribua valor à variável B: ");
	scanf("%d", &B);
	
	printf("Atribua valor à variável C: ");
	scanf("%d", &C);
	
	printf("Atribua valor à variável D: ");
	scanf("%d", &D);
	
	DIFERENCA = (A * B - C * D);
	
	printf("\nDIFERENÇA: %d\n", DIFERENCA);
	
	return 0;
}

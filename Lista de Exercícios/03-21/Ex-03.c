#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua 
esta operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente. */

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, PROD;
	
	printf("\n");
	
	printf("Atribua valor à variável A: ");
	scanf("%d", &A);
	
	printf("Atribua valor à variável B: ");
	scanf("%d", &B);
	
	PROD = A * B;
	
	printf("\nPROD: %d\n", PROD);
	
	return 0;
}

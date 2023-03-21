#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma 
de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo 
apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo 
especificado.*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, X;
	
	printf("\n");
	
	printf("Atribua valor à variável A: ");
	scanf("%d", &A);
	
	printf("Atribua valor à variável B: ");
	scanf("%d", &B);
	
	X = A +B;
	
	printf("\nX: %d\n", X);
	
	return 0;
}

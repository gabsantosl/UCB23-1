#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Leia 2 valores inteiros e armazene-os nas vari�veis A e B. Efetue a soma 
de A e B atribuindo o seu resultado na vari�vel X. Imprima X conforme exemplo 
apresentado abaixo. N�o apresente mensagem alguma al�m daquilo que est� sendo 
especificado.*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, X;
	
	printf("\n");
	
	printf("Atribua valor � vari�vel A: ");
	scanf("%d", &A);
	
	printf("Atribua valor � vari�vel B: ");
	scanf("%d", &B);
	
	X = A +B;
	
	printf("\nX: %d\n", X);
	
	return 0;
}

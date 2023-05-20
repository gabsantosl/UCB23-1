/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 16/05/23

EX-04) PONTEIROS.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	double soma = *pX = *pY;
	
	printf("Valor x = %f\n", soma);
	
	return 0;
}

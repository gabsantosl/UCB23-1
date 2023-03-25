/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 21/03/2023

EXERCÍCIO 09- Faça um algoritmo que leia dois números A e B e imprima o maior deles.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int n1, n2;

	printf("Informe o primeiro algoritmo: ");
	scanf("%d", &n1);
	printf("Informe o segundo algoritmo: ");
	scanf("%d", &n2);

	if(n1>n2){
		printf("\nO maior dos dois algoritmos é %d.", n1);
	}else{
		printf("\nO maior dos dois algoritmos é %d.", n2);
	}

	printf("\n");
	return 0;
}
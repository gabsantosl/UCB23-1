/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 21/03/2023

EXERCÍCIO 11- Construa um algoritmo que receba como entrada três valores e os imprima em 
ordem crescente.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3;

	printf("Informe o primeiro valor: ");
	scanf("%d", &n1);
	printf("Informe o segundo valor: ");
	scanf("%d", &n2);
	printf("Informe o terceiro valor: ");
	scanf("%d", &n3);

	if(n1 > n2 && n2 > n3){
		printf("\n%d, %d, %d.", n3, n2, n1);
	}else{
		if(n3 > n2 && n2 > n1){
			printf("\n%d, %d, %d.", n1, n2, n3);
		}else{
			if(n2 > n1 && n1 > n3){
				printf("\n%d, %d, %d.", n3, n1, n2);
			}else{
				if(n2 > n3 && n3 > n1){
					printf("\n%d, %d, %d.", n1, n3, n2);
				}
			}
		}
	}

	printf("\n");
	return 0;
}
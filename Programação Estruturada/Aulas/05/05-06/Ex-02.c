/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 05/05/23

EX-02) CRIAR UM ALGORITMO QUE LEIA OS ELEMENTOS DE UMA MATRIZ
       INTEIRA DE 4X4 E IMPRIMIR OS ELEMENTOS DA DIAGONAL PRINCIPAL.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
					 	         
	int l, c, matriz[4][4];
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("%i\n", matriz[l][c]);
		}
	}
	
return 0;
}
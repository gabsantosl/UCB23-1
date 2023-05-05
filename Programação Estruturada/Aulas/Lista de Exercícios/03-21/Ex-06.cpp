/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 21/03/2023

EXERCÍCIO 06- Neste problema, deve-se ler o código de uma peça 1, o número de peças 1,
o valor unitário de cada peça 1, o código de uma peça 2, i número de peças 2 e o valor
unitário de cada peça 2. Após, calcule e mostre o valor a ser pago. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int codPECA1, quantPECA1, codPECA2, quantPECA2;
    float valorPECA1, valorPECA2, valorTOTAL;

    printf("Informe o código da peça 1: ");
    scanf("%d", &codPECA1);
    printf("Informe a quantidade de peças 1: ");
    scanf("%d", &quantPECA1);
    printf("Informe o valor unitário de peças 1: ");
    scanf("%f", &valorPECA1);

    printf("\nInforme o código da peça 2: ");
    scanf("%d", &codPECA2);
    printf("Informe a quantidade de peças 2: ");
    scanf("%d", &quantPECA2);
    printf("Informe o valor unitário de peças 2: ");
    scanf("%f", &valorPECA2);

    valorTOTAL = (quantPECA1 * valorPECA1) + (quantPECA2 * valorPECA2);

    printf("\nTOTAL A PAGAR = R$%.2f", valorTOTAL);
	
	return 0;
}

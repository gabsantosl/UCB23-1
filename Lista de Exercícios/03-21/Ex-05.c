/* Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de 
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% 
de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float salFIXO;
	int venTOTAL;
		
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

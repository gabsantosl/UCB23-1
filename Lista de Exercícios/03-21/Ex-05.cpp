/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 21/03/2023

EXERCÍCIO 05- Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas 
efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas 
vendas efetuadas, informar o total a receber no final do mês. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	float salFIXO, venTOTAL, salFINAL;
	
	printf("Informe o seu nome: ");
	gets(nome);
	fflush(stdin);
	
	printf("\nInforme o seu salário: ");
	scanf("%f", &salFIXO);

	printf("Informe o dinheiro arrecadado pelas vendas efetuadas por você nesse mês: ");
	scanf("%f", &venTOTAL);

	salFINAL = salFIXO + (0.15 * venTOTAL);

	printf("\nSeu salário final desse mês é: %.2f", salFINAL);
	
	return 0;
}
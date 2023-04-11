/*
GABRIELA DOS SANTOS LEITE UC22100365

EX-01) 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int a, int b){
	
	int s = a + b;
	return s;
}

int sub(int a, int b){
	
	int s = a - b;
	return s;
}
	
int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int fim = 0, n1, n2, op, resp;
	
	do{
		printf("\nDigite um valor: ");
		scanf("%d", &n1);
		printf("Digite outro valor: ");
		scanf("%d", &n2);
		
		printf("\nEscolha a operação: \n1- Adição \n2- Subtração");
		printf("\n\nSua Opção: ");
		scanf("%d", &op);
		
		if(op == 1){
			resp = soma(n1, n2);
		}else if (op == 2){
			resp = sub(n1, n2);
		}
		
		printf("\nO resultado da operação é %d.", resp);
		
		printf("\n\nDeseja continuar a operação?\n0- Sim \n1- Não");
		printf("\nSua Opção: ");
		scanf("%d", &fim);
		
	}while(fim == 0);
	
	return 0;
}	

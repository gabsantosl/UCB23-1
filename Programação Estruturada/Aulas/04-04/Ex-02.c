/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERCÍCIOS 04/04/2023

EX-02) Calcular a força digitando a massa e a celeração e poderá também, calcular a área 
e o perímetro de um círculo, digitando o raio. Utilize a estrutura switch e do_while.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	float m, a, f, raio, area, peri; 
	
	do{
		printf("\nInforme a operação que deseja realizar: ");
		printf("\n0- Sair do programa.");
		printf("\n1- Calcular a força do objeto.");
		printf("\n2- Calcular a área e o perímetro de um círculo.");
		printf("\n\nOpção: ");
		scanf("%d", &op);
		
		switch (op){

			case 0:
			printf("\nSaindo...");
			break;

			case 1:
			printf("\nInforme a massa do objeto (em kg): ");
			scanf("%f", &m);
			printf("Informe a aceleração do objeto (em m/s²): ");
			scanf("%f", &a);

			f = m * a;

			printf("\nA força do objeto é igual a %.2fN.\n", f);
			break;

			case 2:
			printf("\nInforme o raio do círculo (em m): ");
			scanf("%f", &raio);

			area = 3.14 * (raio * raio);
			peri = 2 * 3.14 * raio;

			printf("\nA área do círculo é %.2fm².", area);
			printf("\nO perímetro do círculo é %.2fm.\n", peri);
			break;

			default:
			printf("Opção invalida.\n");
			break;
		}

	}while(op != 0);
	
	return 0;
}

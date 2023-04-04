/*
Calcular a força digitando a massa e a celeração e poderá também, calcular a área e o 
perímetro de um círculo, digitando o raio. Utilize a estrutura switch e do_while
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	float m, a, f, raio, area, peri; 
	
	do{
		printf("Informe a operação que deseja realizar: ");
		printf("\n0- Sair do programa.");
		printf("\n1- Calcular a força do objeto.");
		printf("\n2- Calcular a área e o perímetro de um círculo.");
		printf("Opção: ");
		scanf("%d", &op);
		
		switch(op){
			case '0':
			printf("")
		}
		
	}while(op > 0);
	
	printf("Informe a massa do objeto (em kg): ");
	scanf("%f", &m);
	printf("Informe a aceleração do objeto (em m/s²): ");
	scanf("%f", &a);
	
	f = m * a;
	
	printf("\nA força do objeto é igual a %.2fN.", f);
	
	return 0;
}

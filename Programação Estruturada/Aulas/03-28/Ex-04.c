/*
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 28/03/2023

EXERCÍCIO 2- A partir do código anterior (Ex-02) você deverá melhorar o código 
de modo a pedir repetidas vezes as notas dos alunos, sempre que um conjunto for 
lido e processado. Para finalizar o programa o usuário deverá pressionar uma 
tecla específica, como a tecla 'F'.;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	char x;
	float nota, media, total=0;
	
	printf("====== CALCULE A SUA MÉDIA ======\n");
	
	printf("Para iniciar o programa pressione 'C' e para finalizar pressione 'F': ");
	scanf("%s", &char);
	
	switch (x)
	{
		case 'F':
		printf("Programa Finalizado.\n");
		break;
		case 'C':
		for(i = 1; i <= 4 ; i++){
		
		printf("Informe a %dª nota: ", i);
		scanf("%f", &nota);
		total = total + nota;
		}
	}
	
	
	media = total/4;
	
	printf("\nA média do aluno é: %.2f.", media);
	
	return 0;
}

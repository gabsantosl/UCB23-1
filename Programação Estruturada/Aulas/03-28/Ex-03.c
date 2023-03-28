/*
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 28/03/2023

EXERCÍCIO 2- A partir do código anterior (Ex-02) você deverá melhorar o código 
de modo a pedir repetidas vezes as notas dos alunos, sempre que um conjunto for 
lido e processado. Para finalizar o programa o usuário deverá pressionar uma 
tecla específica, como a tecla 'F'.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char x;
	int cont, aluno;
	float nota, media, total=0;
	
	printf("====== CALCULO DE MÉDIA ======\n\n");

	for(aluno = 1; ; aluno++){
		for(cont = 1; cont <= 4 ; cont++){
			printf("Informe a %dª nota: ", cont);
			scanf("%f", &nota);
			total = total + nota;
		}

		media = total/4;
		printf("\nA média do aluno é: %.2f.", media);

		printf("\n\nDigite 'F' se deseja finalizar o programa.\nPressione qualquer outra tecla para continuar: ");
		scanf("%s", &x);

		if(x != 'f'){
			printf("\n====== CALCULO DE MÉDIA ======\n\n");
			media = 0;
			total = 0;
		}else{
			break;
		}
	}
		
	return 0;
}
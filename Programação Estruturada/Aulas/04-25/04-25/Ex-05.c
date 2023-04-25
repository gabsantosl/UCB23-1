/*
EXERCÍCIO) QUANTOS ALUNOS POSSUEM O MESMO NOME E QUANTOS POSSUEM PELO MENOS 8 LETRAS NO NOME.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, alunos, nomeIgual = 0, totalOito = 0;
	char nome[80], nome2[80];

	printf("Quantos alunos serão entrevistados? ");
	scanf("%d", &alunos);
	
	for(i=1;i<=alunos;i++){
		printf("Digite o seu nome: ");
		scanf("%s", &nome);
		
		if(i >= 2){
			if (!strcmp(nome, nome2)){
				nomeIgual + 2;
			}
		}
		
		if (strlen(nome) >= 8){
			totalOito++;
		}
		
		strcat(nome, nome2);
	}
	
	if(nomeIgual > 1){
		printf("\n%d alunos possuem o mesmo nome.", nomeIgual);
	}else{
		printf("Nenhum dos alunos possuem o mesmo nome.");
	}
	
	if(totalOito == 1){
		printf("\n1 aluno possui pelo menos 8 letras em seu nome.", totalOito);
	}else if(totalOito > 1){
		printf("\n%d alunos possuem pelo menos 8 letras em seus nomes.", totalOito);
	}else{
		printf("\nNenhum aluno possui pelo menos 8 letras em seu nome.");
	}
	
	
	
	return 0;
}

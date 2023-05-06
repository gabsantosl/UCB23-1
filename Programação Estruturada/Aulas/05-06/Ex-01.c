/*
GABRIELA DOS SANTOS LEITE UC22100365
EXERCÍCIOS 05/05/23

EX-01) CRIAR UM PROGRAMA QUE PEDE AO USUÁRIO PARA DIGITAR 4 NOTAS DE 0 A 10 DE
       4 ALUNOS E OS VALORES DEVERÃO SER ARMAZENADOS EM UMA MATRIZ BIDIMENSIONAL.
       FAÇA A MÉDIA DAS NOTAS DE CADA ALUNO E ARMAZENA AS 4 MÉDIAS EM UM VETOR.
       COLOQUE NA TELA DO USUÁRIO

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
    const int bimestres = 4;
    const int quantAlunos = 4;

    float notasAlunos[quantAlunos][bimestres] = {0};
    float mediasAlunos[quantAlunos] = {0};

    float media = 0;

    printf("Insira as 4 notas do aluno 1: \n");

    for(int aluno = 0; aluno < quantAlunos; aluno++){
        for(int notas = 0; notas < bimestres; notas++){
            scanf("%f", &notasAlunos[aluno][notas]);
            media+= notasAlunos[aluno][notas];
        }

        mediasAlunos[quantAlunos] = media / bimestres;
        media = 0;

        printf("\nInsira as 4 notas do aluno %d: \n", aluno + 2);
    }

    for(aluno = 0; aluno < quantAlunos; aluno++){
        printf("\nA média do aluno %d é %.2f.\n", aluno+1, mediasAlunos[quantAlunos]);
    }
	
	return 0;
}

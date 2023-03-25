/* 
GABRIELA DOS SANTOS LEITE UC22100365	
LISTA DE EXERCÍCIOS 25/03/2023

1- A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando 
dados sobre o salário e o número de filhos. A prefeitura deseja saber:
    a) A média salarial da população;
    b) A média do número de filhos;
    c) o maior salário;
    d) o percentual de pessoas com salário até R$ 100,00.

O final da leitura de dados se dará com a entrada de um salário negativo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");

    int i=1, filhos, somaFilhos=0, salario100=0;
	float salario, somaSalario=0, mediaSalario, mediaFilhos, maiorSalario=0, porcentual;

    printf("======= PESQUISA DA PREFEITURA =======\n");

    printf("\n=== %dª Coleta de dados ====", i);
    printf("\nInforme o seu salário: ");
    scanf("%f", &salario);
    printf("Quantos filhos você tem? ");
    scanf("%d", &filhos);

    while (salario > 0)
    {
        i++;
        printf("\n=== %dª Coleta de dados ==== ", i);
        printf("\nInforme o seu salário: ");
        scanf("%f", &salario);
        printf("Quantos filhos você tem? ");
        scanf("%d", &filhos);

        if(salario < 100){
            salario100++;
        }
        if(salario > maiorSalario){
            maiorSalario = salario;
        }

        somaFilhos = somaFilhos + filhos;
        mediaFilhos = somaFilhos / i;
        somaSalario = somaSalario + salario;
        mediaSalario = somaSalario / i;
        porcentual = ((float)salario100 / i) * 100;
    }

    printf("\n\n======= RESULTADOS DA PESQUISA =======\n");

    printf("\nA média salarial da população é %.2f.", mediaSalario);
    printf("\nA média de filhos da população é %.2f.", mediaFilhos);
    printf("\nO maior salário encontrado foi de R$%.2f.", maiorSalario);
    printf("\nCerca de %.2f porcento da população possui um salário de até R$ 100,00.\n", porcentual);
	return 0;
}
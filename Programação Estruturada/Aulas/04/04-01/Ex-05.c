/*
GABRIELA DOS SANTOS LEITE UC22100365
LISTA DE EXERCÍCIOS 01/04/2023

EX-03) Faça um programa que imprima o dia da semana a partir
de uma nova data. O ano deve ser maior ou igual a 1600, pois 
nessa data houve uma redefinição do calendário e o algoritmo 
não funcionará.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano, diaSemana;
    const char ESC = 27;

    do
    {
        printf("Digite uma data no formato (DD MM AA): ");
        scanf("%d%d%d", &dia, &mes, &ano);

        diaSemana = ano + dia + 3 * (mes - 1) - 1;

        if(mes<3){
            ano--;
        }else{
            diaSemana -= (int)(0.4 * mes + 2.3);
            diaSemana += (int)(ano/4) - (int)((ano / 100 + 1) * 0.75);

            diaSemana %= 7;

            switch (diaSemana)
            {
                case 0:
                printf("\nDomingo.");
                break;

                case 1:
                printf("\nSegunda-feira.");
                break;

                case 2:
                printf("\nTerça-feira.");
                break;

                case 3:
                printf("\nQuarta-feira.");
                break;

                case 4:
                printf("\nQuinta-feira.");
                break;

                case 5:
                printf("\nSexta-feira.");
                break;

                case 6:
                printf("\nSábado.");
                break;

                default:
                break;
            }

            printf("\nDigite ESC para terminar ou ENTER para recomeçar: ");
            scanf("%s", &ESC);
        }

    } while (ESC != 27);
        
    return 0;
}
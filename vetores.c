#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int vetor[3];

    vetor[0] = 5;
    vetor[1] = 15;
    vetor[2] = 45;

    printf("POSIÇÃO 0 : %d",vetor[0]);
    printf("\n");
    printf("POSIÇÃO 1 : %d",vetor[1]);
    printf("\n");
    printf("POSIÇÃO 2 : %d",vetor[2]);
    printf("\n");

    system("pause");

    }

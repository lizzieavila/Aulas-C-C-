#include <stdio.h>
#include <stdlib.h>
//Escrevendo em Português
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    int a = 5, b;

    printf("Valor de a é :%d",a);
    printf("\n");
    scanf("%d",&b);
    printf("Valor de b é :%d",b);
	printf("\nhuruuu\n");
	system("pause");
}


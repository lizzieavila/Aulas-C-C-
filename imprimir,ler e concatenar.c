#include <stdio.h>
#include <stdlib.h>
//Escrevendo em Portugu�s
#include <locale.h>

void main(){

    setlocale(LC_ALL, "Portuguese");

    int a = 5, b;

    printf("Valor de a � :%d",a);
    printf("\n");
    scanf("%d",&b);
    printf("Valor de b � :%d",b);
	printf("\nhuruuu\n");
	system("pause");
}


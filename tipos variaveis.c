#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a;
    float b;
    char c;

    a = 5;
    b = 2.5;
    c = 'r';

    printf("\nO valor de a �: %d", a);
    printf("\nO valor de b �: %.2f", b);
    printf("\nO valor de c �: %c", c);

    scanf("%d",&a);
    scanf("%f",&b);
    scanf(" %c",&c);

    printf("\nO valor de a �: %d", a);
    printf("\nO valor de b �: %.2f", b);
    printf("\nO valor de c �: %c", c);

    printf("\n");
    system("pause");
}

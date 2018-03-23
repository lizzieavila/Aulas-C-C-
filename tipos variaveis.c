#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a;
    float b;
    char c;
    bool d;

    a = 5;
    b = 2.5;
    c = 'r';
    d = true;//true 1 false 0

    printf("\nO valor de a é: %d", a);
    printf("\nO valor de b é: %.2f", b);
    printf("\nO valor de c é: %c", c);
    printf("\nO valor de d é: %d\n", d);

    scanf("%d",&a);
    scanf("%f",&b);
    scanf(" %c",&c);
    scanf("%d",&d);

    printf("\nO valor de a é: %d", a);
    printf("\nO valor de b é: %.2f", b);
    printf("\nO valor de c é: %c", c);
    printf("\nO valor de d é: %d\n", d);

    printf("\n");
    system("pause");
}

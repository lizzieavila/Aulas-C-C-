#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a;
    float b;

    a = 5;
    b = 2.5;

    printf("\nO valor de a �: %d", a);
    printf("\nO valor de b �: %.2f", b);

    printf("\n");
    system("pause");
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 1;
    char b ='x';

    switch(a){
case 1:
    printf("OPÇÃO 1");
    break;
case 2:
    printf("OPÇÃO 2");
    break;
default:
    printf("OPÇÃO INVÁLIDA");
    break;
    }

 switch(b){
 case 'x':
    printf("OPÇÃO x");
    break;

    default:
    printf("OPÇÃO INVÁLIDA");
    break;
    }



    system("pause");
}

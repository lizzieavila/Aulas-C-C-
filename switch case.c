#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 1;
    char b ='x';

    switch(a){
case 1:
    printf("OP��O 1");
    break;
case 2:
    printf("OP��O 2");
    break;
default:
    printf("OP��O INV�LIDA");
    break;
    }

 switch(b){
 case 'x':
    printf("OP��O x");
    break;

    default:
    printf("OP��O INV�LIDA");
    break;
    }



    system("pause");
}

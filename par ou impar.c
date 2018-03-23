#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 5;

    if(a % 2 == 1){
        printf("ÍMPAR");
    }else{
        printf("PAR");
    }
    printf("\n");
    system("pause");

}

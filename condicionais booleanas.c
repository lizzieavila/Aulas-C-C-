#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    bool a = true, b = false;
    if(a){
        printf("verdadeiro");
    }
    printf("\n");
    if(b == false){
        printf("falso");
    }
    printf("\n");
    if(!b){
        printf("falso");
    }
    printf("\n");

    system("pause");
    }

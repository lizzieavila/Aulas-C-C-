#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 5,opcao = 2;

    if(a % 2 == 1){
        printf("�MPAR");
    }else{
        printf("PAR");
    }
    printf("\n");

    if(opcao == 1 ){
       printf("OP��O 1");
    }else if(opcao == 2){
        printf("OP��O 2");
    }else{
        printf("OUTRO OP��O");
    }
    printf("\n");
    system("pause");

}

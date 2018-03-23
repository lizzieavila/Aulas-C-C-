#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
   setlocale(LC_ALL,"Portuguese");

   int a = 5;

   if(a == 5){
    printf("É IGUAL!\n");
   }
   system("pause");
}

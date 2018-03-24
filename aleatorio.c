#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
  setlocale(LC_ALL,"Portuguese");

 srand((unsigned)time(NULL));

 int aleatorio = rand();
 printf("%d",aleatorio);
 printf("\n");
 system("pause");
}

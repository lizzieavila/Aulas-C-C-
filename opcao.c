#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"Portuguese");

  int opcao;

  printf("Escolha uma op��o:\n");
  printf("Op��o 1 - 1 \n");
  printf("Op��o 2 - 2 \n");
  printf("Op��o 3 - 3 \n");
  printf("Op��o 4 - 4 \n");
  scanf("%d",&opcao);

  system("pause");

}

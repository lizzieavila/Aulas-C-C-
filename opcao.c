#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"Portuguese");

  int opcao;

  printf("Escolha uma opção:\n");
  printf("Opção 1 - 1 \n");
  printf("Opção 2 - 2 \n");
  printf("Opção 3 - 3 \n");
  printf("Opção 4 - 4 \n");
  scanf("%d",&opcao);

  system("pause");

}

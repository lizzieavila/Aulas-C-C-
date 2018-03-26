#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
  setlocale(LC_ALL,"Portuguese");

  char palavra[255];

  printf("Digite uma palavra:");

  setbuf(stdin,0);
  fgets(palavra,255,stdin);

  printf("%s",palavra);

  system("pause");

}

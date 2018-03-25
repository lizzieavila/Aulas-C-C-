#include <stdio.h>
#include <stdlib.h>
void main(){
  int contador; //variável de controle do loop
  for(contador = 1; contador <= 10; contador++)
  {
      printf("5 x %d = %d \n", contador,5 * contador);
  }
  system("pause");
}

#include <stdio.h>
#include <stdlib.h>
void main(){
    int contador = 1; //declarando e inicializando a variável de controle

    while (contador <= 10) // Testando a condição
    {
          printf("%d ", contador); //Executando um comando dentro do laço

          contador++; //atualizando a variável de controle
    }

    system("pause");
}

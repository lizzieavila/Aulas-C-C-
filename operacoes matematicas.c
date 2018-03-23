#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 5, b = 3 ;

    printf("\n A soma de %d e %d é : %d \n",a,b, a + b );
    printf("\n A subtração de %d e %d é : %d \n",a,b, a - b );
    printf("\n A multiplicação de %d e %d é : %d \n",a,b, a * b );
    printf("\n A divisão de %d e %d é : %d \n",a,b, a / b );
    printf("\n O resto da divisão de %d e %d é : %d \n",a,b, a % b );
    printf("\n O valor absoluto de -3 é : %d \n",abs(-3) );




    system("pause");

}

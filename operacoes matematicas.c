#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int a = 5, b = 3 ;

    printf("\n A soma de %d e %d � : %d \n",a,b, a + b );
    printf("\n A subtra��o de %d e %d � : %d \n",a,b, a - b );
    printf("\n A multiplica��o de %d e %d � : %d \n",a,b, a * b );
    printf("\n A divis�o de %d e %d � : %d \n",a,b, a / b );
    printf("\n O resto da divis�o de %d e %d � : %d \n",a,b, a % b );
    printf("\n O valor absoluto de -3 � : %d \n",abs(-3) );




    system("pause");

}

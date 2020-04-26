#include <stdio.h>
#include <stdlib.h>
 void main(){

    printf("~~~~ BEM-VINDO AO SISTEMA DE ALGORITIMOS UNIFEI ~~~~ \n");

   int num, aux = 1;

        printf("digite um numero inteiro maior do que 2 :");
        scanf("%d",&num);

    for( int i = 2 ; i <= num; i++ ){

        for(int j = 1; j <= aux; j++){
        printf("# ");
        }

        printf("\n");
        aux++;

    }





    printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");
    system("pause");

}

#include <stdio.h>
#include <stdlib.h>
 void main(){

    printf("~~~~ BEM-VINDO AO SISTEMA DE ALGORITIMOS UNIFEI ~~~~ \n");
int cont = 1;
    printf("\nOrdem crescente\n");
    while( cont < 21){

        printf("%d, ",cont);
        cont++;
    }
    printf("\nOrdem decrescente\n");
    int dcres = 20;
    while( dcres > 0){

        printf("%d, ",dcres);
        dcres--;
    }

    printf("\nOrdem de impares\n");
    int imp = 1;
    while( imp < 21){

        printf("%d, ",imp);
        imp= imp+2;
    }


    printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");
    system("pause");

}

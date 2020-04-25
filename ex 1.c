#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 void main(){

    printf("~~~~ BEM-VINDO AO SISTEMA DE ALGORITIMOS UNIFEI ~~~~ \n");
     int ex;
    do{
    int i, n1;
    printf("Digite um numero inteiro e abaixo estara sua potencia de 0 a 10: ");
    scanf("%d",&n1);
    printf("\nO numero digitado foi %d, Logo a potencia é : \n",n1);
    for (i = 0; i < 11; i++){
            int aux = pow(n1,i);
        printf(" x^%d = %d\n",i, aux);
    }
    printf("Para continuar o programa digite qualquer numero diferente de 0\nSe quiser sair digite 0!\n\n");

    scanf("%d",&ex);
    }while(ex!=0);


    printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");



}

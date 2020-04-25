#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 void main(){

    printf("~~~~ BEM-VINDO AO SISTEMA DE ALGORITIMOS UNIFEI ~~~~ \n");
int n, ex;
do{
    printf("Digite a uma potencia 3 que abaixo ira mostrar de zero até o numero digitado : ");
    scanf("%d",&n);
    printf("\nO numero digitado foi %d, Logo as potencias são : \n", n);

    for(int i = 0; i<=n;i++){
            int aux = pow(3,i);
        printf(" 3^%d = %d\n", i, aux);
    }
        printf("Para continuar o programa digite qualquer numero diferente de 0\nSe quiser sair digite 0!\n\n");

    scanf("%d",&ex);
    }while(ex!=0);



    printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");


}

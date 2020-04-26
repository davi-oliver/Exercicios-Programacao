#include <stdio.h>
#include <stdlib.h>
 void main(){

    printf("~~~~ BEM-VINDO AO SISTEMA DE ALGORITIMOS UNIFEI ~~~~ \n");

    int n,aux=0;
    printf("Entre com varios valores e no final mostrarei qual é o maior e o menor entre eles\n");
    printf("Para sair digite qualquer numero negativo\n");
    printf("Insira um numero ");


    int prim, ult,sai;
    do{
       printf("  :");
       scanf("%d",&n);

                if(aux ==0){
                        prim = n;
                        ult = n;
                        aux++;}

       if(n>=prim ){
                prim=n;


        }
        if(n<=ult){
                if(n!=0)
            ult=n;
        }

    if(n==0){
        sai = n;
    }
    }while(n!=sai || n>sai);
    printf(" O maior numero é : %d e o menor : %d",prim,ult);


    printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");
    system("pause");

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 void main(){

    printf("~~~~ BEM-VINDO AO SISTEMA DE ALGORITIMOS UNIFEI ~~~~ \n");
int esc,ex;
do{
    printf("\n_______________________________________________________\n");
    printf("            Menu de Op��es      \n\n");
    printf("1- Op��o Diferenciada\n2- Op��o exelente\n3- Op��o mediana\n\nDigite o numero da op��o escolhida:  ");
    scanf("%d",&esc);
    if(esc>3){printf("Essa op��o n�o existe ! ");}
    else{
        switch(esc){

    case 1:
        printf("\nVoc� escolheu a Op��o Diferenciada \n");
        break;

        case 2:
        printf("\nVoc� escolheu a : Op��o Exelente\n");
        break;

        case 3:
        printf("\nVoc� escolheu a Op��o Mediana\n");
        break;
        }
        }
        printf("\n");
        for(int i = 1; i<2;i++){
            printf("_______________    __________\n");
            printf("| 1- CONTINUAR |  | 2- SAIR |\n________________   __________\n");
            printf("digite a op��o desejada : ");


        }

    scanf("%d",&ex);
    }while(ex<2);



    printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");

}

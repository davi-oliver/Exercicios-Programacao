#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 void main(){

    printf("~~~~ BEM-VINDO AO SISTEMA DE ALGORITIMOS UNIFEI ~~~~ \n");
int esc,ex;
do{
    printf("\n_______________________________________________________\n");
    printf("            Menu de Opções      \n\n");
    printf("1- Opção Diferenciada\n2- Opção exelente\n3- Opção mediana\n\nDigite o numero da opção escolhida:  ");
    scanf("%d",&esc);
    if(esc>3){printf("Essa opção não existe ! ");}
    else{
        switch(esc){

    case 1:
        printf("\nVocê escolheu a Opção Diferenciada \n");
        break;

        case 2:
        printf("\nVocê escolheu a : Opção Exelente\n");
        break;

        case 3:
        printf("\nVocê escolheu a Opção Mediana\n");
        break;
        }
        }
        printf("\n");
        for(int i = 1; i<2;i++){
            printf("_______________    __________\n");
            printf("| 1- CONTINUAR |  | 2- SAIR |\n________________   __________\n");
            printf("digite a opção desejada : ");


        }

    scanf("%d",&ex);
    }while(ex<2);



    printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");

}

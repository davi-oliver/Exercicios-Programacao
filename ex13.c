#include <stdio.h>
#include <stdlib.h>
 void main(){

    printf("~~~~ BEM-VINDO AO SISTEMA DE ALGORITIMOS UNIFEI ~~~~ \n");

    printf("Digite o primeiro valor :");
    int a;
    scanf("%d", &a);

    printf("Digite o segundo valor :");
    int b;
    scanf("%d", &b);

    if(a==b){
        printf("\nPOR SER DOIS VALORES IGUAIS NÃO EXISTE INTERVALO ENTRE ESSES VALORES\n");
    }
    int aux1, aux2;
    if(a>b){

             aux1 = a;
             aux2 = b+1;
    }


else {
             aux1 = b;
             aux2 = a+1;

}
    for(aux2; aux1 > aux2; aux2++){
        printf("%d, ",aux2);}


    printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");
    system("pause");

}

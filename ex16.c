#include <stdio.h>
#include <stdlib.h>
 void main(){

    printf("~~~~ BEM-VINDO AO SISTEMA DE ALGORITIMOS UNIFEI ~~~~ \n");
    int n1,n2;
    printf("Digite dois numeros inteiros que mostrarei a tabuada de 0 a 10\n");
    scanf("%d%d",&n1,&n2);
 for(int c = 0; c<=10;c++){
printf("%d x %d = %d  ",n1,c,n1*c); printf("  |%d x %d = %d\n",n2,c,n2*c);

 }



    printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");
    system("pause");

}

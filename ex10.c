#include <stdio.h>
#include <stdlib.h>
 void main(){


printf("Diga em KM/H, qual velocidade voce esta dirigindo agora :  ");
float vel;
scanf("%f", &vel);

printf("\nDiga em KM/H, qual eh a velocidade da via que voce esta dirigindo  :  ");
float via;
scanf("%f", &via);
if(vel<=via){
    printf(" Voce esta dirigindo na velocidade segura da via.");

}else if(vel*1.20 > via && vel <= via*1.20){

printf(" Multado ! \n O valor da multa eh de : R$ 85,13 ");

}
else if((vel*1.20 > via && vel <= via*1.20) || (vel*1.5 > via && vel <= via*1.5)){
    printf(" Multado ! \n O valor da multa eh de : R$ 127,69 ");


}
else{
      printf(" Multado ! \n O valor da multa eh de :  R$ 574,62 ");

}



    printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");
    system("pause");


}




#include <stdio.h>
#include <math.h>
main(){
float a,a2,p,imc;
printf("Cauculadora de IMC(Utilize o ponto no lugar da vírgula): \n");
printf("Qual seu peso, em quilos? ");
scanf("%f", &p);
printf("Qual sua altura, em metros? ");
scanf("%f", &a);
a2=(a*a);
imc=(p/a2);
printf("Seu IMC é %.2f", imc);
return 0;
}

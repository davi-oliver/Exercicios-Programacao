#include <stdio.h>
#include <math.h>
main(){
float h,m;
printf("Informe as horas(0 a 24): ");
scanf("%f", &h);
printf("Informe os minutos(0 a 60): ");
scanf("%f", &m);
if((h>=5)&&(h<=11)&&(m>=00)&&(m<60)){
 printf("Per�odo da manh�");
}
if((h>=12)&&(h<=17)&&(m>=00)&&(m<60)){
 printf("Per�odo da tarde");
}
if((h>=18)&&(h<24)&&(m>=00)&&(m<60)){
 printf("Per�odo da noite");
}
if((h>=00)&&(h<=4)&&(m>=00)&&(m<60)){
 printf("Per�odo da noite");
}
if((h<0)||(h>=24)||(m<0)||(m>=60)){
 printf("Hor�rio inv�lido");

}
return 0;
}

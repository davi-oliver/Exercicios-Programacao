#include <stdio.h>
main(){float n1,n2,d,m,s,a;
printf("Digite o primeiro número:\n");
scanf("%f", &n1);
printf("Digite o segundo número:\n");
scanf("%f", &n2);
d=n1/n2;
m=n1*n2;
s=n1-n2;
a=n1+n2;
printf("A adição dos números é %.2f \n", a);
printf("A subtração dos números é %.2f \n", s);
printf("A divisão dos números é %.2f \n", d);
printf("A adição dos números é %.2f \n", a);
printf("A multiplicação dos números é %.2f \n", m);
return 0;
}

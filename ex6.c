#include <stdio.h>
main(){float n1,n2,d,m,s,a;
printf("Digite o primeiro n�mero:\n");
scanf("%f", &n1);
printf("Digite o segundo n�mero:\n");
scanf("%f", &n2);
d=n1/n2;
m=n1*n2;
s=n1-n2;
a=n1+n2;
printf("A adi��o dos n�meros � %.2f \n", a);
printf("A subtra��o dos n�meros � %.2f \n", s);
printf("A divis�o dos n�meros � %.2f \n", d);
printf("A adi��o dos n�meros � %.2f \n", a);
printf("A multiplica��o dos n�meros � %.2f \n", m);
return 0;
}

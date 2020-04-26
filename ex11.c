#include <stdio.h>
#include <stdlib.h>
 void main(){

    printf("~~~~ BEM-VINDO AO SISTEMA DE ALGORITIMOS UNIFEI ~~~~ \n");
printf("\nDigite  o ano que voce nasceu : ");
int nsc;
scanf("%d", &nsc);

printf("\nDigite o dia : ");
int d;
scanf("%d",&d);

printf("\n1 >> JANEIRO\n2 >> FEVEREIRO\n3 >> MARCO\n4 >> ABRIL\n5 >> MAIO\n6 >> JUNHO\n7 >> JULHO\n8 >> AGOSTO\n9 >> SETEMBRO\n10 >> OUTUBRO\n11 >> NOVEMBRO\n12 >> DEZEMBRO\nESCOLHA O MES QUE VOCE NASCEU: ");
int m;
scanf("%d", &m);

// _____________________________________________________________________________


printf("\nDigite  o ano atual : ");
int hj;
scanf("%d", &hj);

printf("\nDigite o dia de hoje : ");
int dhj;
scanf("%d",&dhj);
printf("\n1 >> JANEIRO\n2 >> FEVEREIRO\n3 >> MARCO\n4 >> ABRIL\n5 >> MAIO\n6 >> JUNHO\n7 >> JULHO\n8 >> AGOSTO\n9 >> SETEMBRO\n10 >> OUTUBRO\n11 >> NOVEMBRO\n12 >> DEZEMBRO\nESCOLHA O MES DE HOJE : ");
int mhj;
scanf("%d", &mhj);





int id;
id = hj-nsc;
if(m==1 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m == 1 && m != mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
if(m==2 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m==2 && m !=mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
    if(m==3 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m==3 && m !=mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
    if(m==4 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m==4 && m !=mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
    if(m==5 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m==5 && m !=mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
    if(m==6 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m==6 && m !=mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
    if(m==7 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m==7 && m !=mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
    if(m==8 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m==8 && m !=mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
    if(m==9 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m==9 && m !=mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
    if(m==10 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m==10 && m !=mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
    if(m==11 && m==mhj){
    printf("\nHOJE EH SEU ANIVERSARIO! PARABENS\n HOJE VOCE COMPLETA %d ANOS DE VIDA",id);

    }
    else if(m==11 && m !=mhj){
    --id;
    printf("VOCE TEM %d ANOS E %d Meses", id,12-mhj);
    }
     printf("\n \n ~~~~~OBRIGADO POR USAR O NOSSO SISTEMA ~~~~~ \n");
    system("pause");

}






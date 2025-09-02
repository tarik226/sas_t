#include <stdio.h>

/*partie 4*/
/*int main{void}{
    int rayon=10;
    //printf("entrer un nombre pour calculer le rayon ");
    //scanf("%d",&rayon);
    printf("%f",4.0f/3.0f*π*r*r*r);
}

int main1{void}{
    int rayon;
    printf("entrer un nombre pour calculer le rayon ");
    scanf("%d",&rayon);
    printf("le rayon est %d",4.0f/3.0f*π*r*r*r);
}

int main2{void}{
    float montant;
    printf("entrer un montant en dollar et cents pour calculer votre tax ");
    scanf("%d",&montant);
    printf("avec tax ajoutée $ %.2f",montant+montant*5/100);
}


int main3(void){
    int entre;
    printf("entrer  un nombre pour calculer le rsultat de polynome");
    scanf("%d",&entre)
    printf("le resultat de polynome est : %d",3*entre*entre*entre*entre*entre+
                                            2*entre*entre*entre*entre-
                                            5*entre*entre*entre-entre*entre
                                            +7*entre-6)
}

int main4(void){
    int entree;
    printf("entrer  un nombre pour calculer le rsultat de polynome");
    scanf("%d",&entre)
    printf("le resultat de polynome est : %d",((((3*entree+2)*entree–5)*entree–1)*entree+7)*entree–6)}*/


//int main5(void){
    int entree;
    printf("entrer  un nombre ");
    scanf("%d",&entree);
    int twenty=entree/20;
    int reste20=entree-twenty*20;
    int ten=reste20/10;
    int rest10=reste20-ten*10;
    int five=rest10/5;
    int rest5=rest10-five*5;
    int ones=rest5;
    printf("billet de 20 %d\n billet de 10 %d\n billet de 5 :%d\n billet de 1 : %d",reste20,rest10,rest5,ones);
};

int main6(){
    float solde , taux , paiement;
    printf("entrer le solde ");
    scanf("%f",&solde);
    print("entrer le taux mensuel");
    scanf("%f",&taux) ;
    print("entrer le paiement mensuel");
    scanf("%f",&taux) ;
    float reste1=solde-paiement+solde*taux;
    float reste2=reste1-paiement+solde*taux;
    float reste3=reste2-paiement+solde*taux;
    printf("Solde restant après le premier paiement : %.2f \n",reste1);
    printf("Solde restant après le deuxième paiement :%.2f \n",reste2);
    printf("Solde restant après le troisième paiement %.2f",reste3);
    return 0;
}

int main7(void){
    int temp0=1;
    for( int i=0;i<=6;i++){
         temp0--;
         for( int j=temp0 ;j<=8;j++){
            int temp=8;
            if(j==temp){
                printf("x");
                temp-=2;
                if(temp==3){
                    break;
                }
            }
         }
    }
}


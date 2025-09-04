// #include <stdio.h>
// int main(){
    
// int nbr0,nbr1,nbr2,nbr3,nbr4;
//  printf("entrer");
//     scanf("%d-%d-%d-%d-%d",&nbr0,&nbr1,&nbr2,&nbr3,&nbr4);
//     int nbrss[5]={{nbr0},{nbr1},{nbr2},{nbr3},{nbr4}};
//     int len=sizeof(nbrss)/sizeof(nbrss[0]);
    
//     int countpre ; 
//     int pre;
//     if (len != 0)
//     { for(int i=0;i<=len;i++)
//         pre = nbrss[0][i] / 10;
//         countpre++;
//         if(countpre !=13){
//             printf("entrer la sequence enforme de nnnn-n-nnn-nnnnn-n");
//         }else{printf("Préfixe GS1 : %d
// Identifiant de groupe : %d
// Code de l'éditeur : %d
// Numéro d'article : %d
// Chiffre de contrôle : %d
            
//             ",nbr0,nbr1,nbr2,nbr3,nbr4)}
//     }}




#include <stdio.h>

// int main1() {
//     int n,n1,n2;

//     printf("Entrez un nombre de deux chiffres");
//     scanf("%d",&n);
// if (10<=n||n<=99){
//         printf("Ce n'est pas un nombr a 2 chifres");
//     }
// n1 = n / 10;  
//     n2 = n % 10;     
//     printf("Nombre inversee : %d%d",n1,n2);
//     return 0;
// }

int main3(){
    int jour1,jour2,mois1,mois2,annee1,annee2;
    scanf("entrer la premier date : %d/%d/%d",&jour1,&mois2,&annee1);
    scanf("entrer la deuxieme date : %d/%d/%d",&jour1,&mois2,&annee1);
    if(annee1<annee2){
        printf("la premier annee est ancienne ");
    }else{
        if(annee1>annee2){
            printf("la deuxieme annee est ancienne ");
        }else{
            if(mois1<mois2){
                printf("la premier annee est ancienne ");
            }else{
                if(mois1>mois2){
                    printf("la deuxieme annee est ancienne ");
                }else{
                    if(jour1<jour2){
                        printf("la premier annee est ancienne ");
                    }else{
                        if(jour1>jour2)
                        printf("la deuxieme annee est ancienne ");
                        else{
                            print("les deux dates sont les memes");
                        }
                    }
                }
            }
        }
    }

}


int main6(){
    int n;
    scanf("entrz votre marque",&n);
    if(0<n<100){
        printf("message d'erreur");
    }else {
    switch (n)
    {
    case 90<n<100 :
        printf("voter marque est A");
        break;
    case 80<n<89 :
        printf("voter marque est B");
        break;
    case 70<n<79 :
        printf("voter marque est C");
        break;
    case 60<n<69 :
        printf("voter marque est D");
        break;
    case 0<n<59 :
        printf("voter marque est F");
        break;
    default:
    print("haha");
        break;
    }}
}

int main55(){
    int nombre,nombre1;
    printf("entrer 2 entiers");
    scanf("%d,%d",&nombre,&nombre1);
    (nombre1==0)? printf("le premier nombre contient le gcd"):(nombre==0)?printf("le deuxieme nombre contient le gcd"):NULL;

int reste1;
 int quo;
do{
 reste1=nombre1%nombre;
  quo=nombre1/nombre;
nombre1=reste1; reste=nombre;nombre=nombre1;
}while (quo!=0);
printf("le gcd %d",nombre);
}



// int main66(){
//     int nombre,nombre1;
//     printf("entrer une fraction ");
//     scanf("%d/%d",&nombre,&nombre1);

// int temp;
// int reste1;
// do{
// reste1=nombre1%nombre;
// temp =nombre1; nombre1=nombre;nombre=reste1;
// }while (reste1!=0);
// int var1=nombre/temp;
// int var2=nombre1/temp;
// printf("la fraction simplifé est %d/%d",nombre1,nombre);
// printf("le gcd %d",nombre);
// }
// Online C compiler to run C program online
#include <stdio.h>

#include <stdio.h>
int main(){    
    int entree,N=100;
    //*n=N;
    float notes[N];
    //int nbrelement=sizeof(notes)/sizeof(notes[0]);

 label:   printf("\n\n");
 printf("1) saisr n notes\n");
    printf("2) afficher les notes\n");
    printf("3) statistiques (moynenne ,max, min , admis/ non admis)\n");
    printf("4) ajouter une note\n");
    printf("5) modifier une note (par index)\n");
    printf("6) supprimer une note (par index)\n");
    printf("0) quitter");
    scanf("%d",&entree);


   
   
    void saisirnotes(){
        //int N ;maxnotes=100;
        do {
            printf("combien des notes(1...100)\n");
            scanf("%d",&N);
        }
        while (N<1 || N>100);
        //*n=N;
        for(int i=0;i<N;i++){
            float x;
            do {
                printf("note[%d]=",i);
                scanf("%f",&x);
            }while (x<0 || x>20);
            notes[i]=x;
        }
    }


    void  affichernotes(){
        for(int i=0;i<N;i++){
            if(N==0){
                printf("aucun note saisi");
            }
            printf ("[%d]  %.2f \n",i,notes[i]);
        }
    }
    void calculermoyenne(){
        float moyenne,somme=0.0;
        for(int i=0;i<N;i++){
            somme+=notes[i];
        }
        moyenne =somme/N;
        printf("le moyenne des notes est %.2f\n",moyenne);
    }
    void trouvermax(){
        int index=0;
        float max=notes[0];
        for(int i=0;i<N;i++){
            if(notes[i]>max){
                max=notes[i];
                index=i;
            }
        }
        printf("l element meximale est %f  d indice %d \n",max,index);
    }
    void trouvermin(){
        int index=0;
        float min=notes[0];
        for(int i=0;i<N;i++){
            if(notes[i]<min){
                min=notes[i];
                index=i;
            }
        }
        printf("l element minimale est %f d indice %d \n",min,index);

    }
    
    void compteradmis(){
        int countadmis=0,countnadmis=0;

        for(int i=0;i<N;i++){
            if(notes[i]>=10){
                 countadmis++;
            } else{
                countnadmis++;
            } 
        

    }
        printf("le nombre d admis %d \n le nombre de non admis %d,\n",countadmis,countnadmis);
    }

  //  int compternandmis(){
 //       int i, countnadmis ;

    //    for(i=0;i<4;i++){
    //        if(notes[i]<10){
    //             countnadmis++;
    //        }    
        

 //   }
  //      printf("le nombre de non admis %d\n",countnadmis);
  //  }

    void ajouternote(){
        float noteajout;
        scanf("%f",&noteajout);
        if(noteajout<0 || noteajout>20){
            printf("note non valide");
        }else{
            notes[N]=noteajout;
            N++;
        }
        
        
    }

    void modifiernote(){
        int indice;
        float nouvellevaleur;
        scanf("%d  %f",&indice,&nouvellevaleur);
        notes[indice]=nouvellevaleur;

    }

    void supprimernote(){
        int i,indice1;
        scanf("%d",&indice1);
        for(i=indice1;i<N;i++){
            notes[indice1]=notes[indice1+1];
        }
        N--;
    }
     switch (entree){
        case 1: saisirnotes() ; 
                goto label;
                break;
        case 2: affichernotes();
        goto label;
                break;
        case 3 : calculermoyenne();
                trouvermax();
                trouvermin();
                compteradmis();
               // compternandmis(); 
                goto label;
                break;
        case 4 : ajouternote();
        goto label;
                break;
        case 5:modifiernote();
        goto label;
                break;
        case 6: supprimernote();
        goto label;
                break;
        case 0: goto label;
        default : printf("aucun cas choisi"); goto label;break;
    }
}
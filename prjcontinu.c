// Online C compiler to run C program online
#include <stdio.h>

#include <stdio.h>
#include <string.h>


    typedef struct {
        char nom[50];
        int id;
        float notes[4];
        float moyenne;
    } etudiant;
    void ajouteretudiant();
    void ajoutnotes();
    void moyenneparetudiant();
    void moyennegenerale();
    void affichage();
    void bulletin();
    
    
    etudiant etudiants[10];
    int indice=0;

void ajouteretudiant(){
    char nom[20];
    int id;
    
    printf("le nom d etudiant:");
    scanf("%s",&nom);
    
    printf("l identifiant d etudiant:");
    scanf("%d",&id);
    
    etudiant e1;
    strcpy(e1.nom,nom);
    e1.id = id;
    //e1.moyenne=moyenneparetudiant();
    etudiants[indice]=e1;
    indice++;
}

    void ajoutnotes(){
       int identifiant;
        printf("identifiant d etudiant");
        scanf("%d",&identifiant);
        for (int i = 0; i < indice; i++)
        {
        
            if(etudiants[i].id==identifiant){
                for (int j = 0; j < 4; j++)
                {
                    float note;
                     printf("note n° %d:\n",j+1);
                    scanf("%f",&note);
                    etudiants[i].notes[j]=note;
                }
                
                
            }
        }
        
        
    }
    

    void moyenneparetudiant(){
        int identifiant;
        float somme=0;
        printf("identifiant d etudiant");
        scanf("%d",&identifiant);
        for (int i = 0; i < indice; i++)
        {
             
            if(etudiants[i].id==identifiant){
                for(int j=0;j<4;j++){
                somme+=etudiants[i].notes[j];
                
            }
            etudiants[i].moyenne=somme/4;
        }}
        
          
            
        //int index=e1.id;
        float moyenne=somme/4;
        printf("%.2f",moyenne);
        //return moyenne;
    }
    // erreur
    void moyennegenerale(){
        float somme=0;
        for (int i = 0; i < indice; i++)
        {
            //printf("%.2f",etudiants[i].moyenne);
            somme+=etudiants[i].moyenne;
        }
        float moyenne=somme/indice;
        printf("le moyenne globale %.2f:",moyenne);
        
    }

    void  affichage(){
        for (int i = 0; i < indice; i++)
        {
            /* code */
            if(sizeof(etudiants[i].notes)/sizeof(etudiants[i].notes[0])!=0){
            printf("%s %d %.2f %.2f %.2f %.2f %.2f\n",
            etudiants[i].nom,
            etudiants[i].id,
            etudiants[i].notes[0],
            etudiants[i].notes[1],
            etudiants[i].notes[2],
            etudiants[i].notes[3],
            etudiants[i].moyenne);}
            else{
                printf("siair les notes");
            }
        }
        
    }

    void bulletin(){
        int id;
        printf("quelle  etudiant souhaitee(identifiant)");
        scanf("%d",&id);
        for (int i = 0; i < indice; i++)
        {
            /* code */
            if(etudiants[i].id==id){
                printf("%s | %d |%.2f |%.2f |%.2f |%.2f |%.2f ",
                    etudiants[i].nom,
                    etudiants[i].id,
                    etudiants[i].notes[0],
                    etudiants[i].notes[1],
                    etudiants[i].notes[2],
                    etudiants[i].notes[3],
                    etudiants[i].moyenne);
            }else {
                printf("identifiant non trouve");
            }
            
        }
        
    }

int main(){
    


   label :
    int choix;
    printf("\n \n");
    printf("1) Ajouter un étudiant \n");
    printf("2) Saisir les notes d un étudiant \n");
    printf("3) Afficher tous les étudiants \n");
    printf("4) Afficher bulletin d un étudiant \n");
    printf("5) Calculer la moyenne générale \n");
    printf("6) Calculer la moyenne d etudiant par indice \n");
    printf("0) Quitter \n");
    scanf("%d",&choix);

    switch(choix){
        case 1:
            ajouteretudiant();
            goto label;
            break;
        case 2:
            ajoutnotes();
            goto label;
            break;
        case 3:
            affichage();
            goto label;
            break;
        case 4:
            bulletin();
            goto label;
            break;
        case 5:
            moyennegenerale();
            goto label;
            break;
        case 6:
            moyenneparetudiant();
            goto label ;
            break;

    };
}
#include <stdio.h>
int main(){
    typedef struct {
        char nom;
        int id;
        float notes[4];
        float moyenne;
    } etudiant;
    /*char nom;*/int id;float notes[4];
    printf("le nom d etudiant:");
    scanf("%s",&nom);
    printf("l id d etudiant:");
    scanf("%d",&id);
    for(int i=0;i<4;i++){
        printf("entrez la note numero %d",i);
        scanf("%f",&notes[i]);
    }
    etudiant e1={nom,id,notes,moyenneparetudiant(e1)};
    etudiants[0]=e1;
    etudiant etudiants[10];

    float moyenneparetudiant(etudiant e1){
        float somme=0;
        int index=e1.id;
        for(int i=0;i<4;i++){
            somme+=e1.notes[i];
        }
        float moyenne=somme/4;
        printf("la moyenne de l etudiant d indice %d  est %f\n",index,moyenne);
        return moyenne;
    }

    void moyennegenerale(){

    }
    int option;
    printf("choisir une option");
    scsanf("%d",&option);
    switch(option){
        case 1:
            ajouteretudiant();
            break;
        case 2:
            trouvermax();
            break;
        case 3:
            trouvermin();
            break;
        case 4:
            compteradmis();
            break;
        case 5:
            ajouternote();
            break;
        default:
            printf("option non valide");
    }
}
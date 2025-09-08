#include <stdio.h>;
#include <stdbool.h>
//q1
#include <stdio.h>
int main(){
    int n;
    int tab[10]={0,0,0,0,0,0,0,0,0,0};
    printf("un nombre");
    scanf("%d",&n);
    while(n>0){
        int nn=n%10;
        tab[nn]++;
        n/=10;
    }
    printf("les chiffres repetes sont:\n");
    for (int i = 0; i < sizeof(tab)/sizeof(tab[0]); i++)
    {
        if (tab[i]>=2){
            printf("%d\t",i);
        };
        }
    
}

//q2 q3
#include <stdio.h>
int main(){
    int tab[]={0,0,0,0,0,0,0,0,0,0};
    int n;
    printf("ecrire un nnombre");
    scanf("%d",&n);
    int n1;
    while (n>0){
        n1=n%10;
        tab[n1]++;
        n /= 10;
    }
    printf("chuffre:");
    for (int i = 0; i <= 9; i++)
    {
        printf("%d \t",i);

    }
    printf("\n");
    printf("les occurences :");
    for (int i = 0; i <= 9; i++)
    {
        
            printf("%d\t",tab[i]);
        
    }
    
    
}

//q4
int main(){
    int tab[]={0,0,0,0,0,0,0,0,0,0};
    int n;
    printf("ecrire un nnombre");
    scanf("%d",&n);
    int n1;
    while (n>0){
        n1=n%10;
        tab[n1]++;
        n /= 10;
    }
    printf("chuffre:");
    for (int i = 0; i <= sizeof(tab)/sizeof(tab[0]); i++)
    {
        printf("%d \t",i);

    }
    printf("\n");
    printf("les occurences :");
    for (int i = 0; i <= 9; i++)
    {
        
            printf("%d\t",tab[i]);
        
    }
    
    
}
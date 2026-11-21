#include <stdio.h>

int main(){
    char reponse = 'O';

    while(reponse == 'O' || reponse == 'o'){
        int cpt = 1, n, res;
        printf("\nProgramme de table de multiplication");
        printf("Entrez un entier = ");
        scanf("%d", &n);
        
        while(cpt <= 10){
            res = cpt * n;
            printf("%.2d * %.2d = %3d\n", cpt, n, res);
            cpt ++;
        }
        while (getchar() != '\n'); 
        printf("Voulez vous reexecuter le code (O/N) :");
        scanf("%c", &reponse);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int ligne, colonne, nbre;
    char caractere, reponse;

    do{
        printf("\nEntrez un nombre : ");
        scanf("%d", &nbre);
        while (getchar() != '\n');
        printf("\nEntrez un caractere : ");
        scanf("%c", &caractere);
        while (getchar() != '\n');
        for(ligne = 1; ligne <= nbre; ligne ++){
            for(colonne = 1; colonne <= nbre; colonne ++){
                printf("%c", caractere);
            }
            printf("\n");
        }

        printf("Vooulez vous reexecuter le code (O/N) :");
        scanf("%c", &reponse);
    }while(reponse == 'O' || reponse == 'o');

    return 0;
}
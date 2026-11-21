#include <stdio.h>

int main(){
    float valeur, totvaleur;
    int nbValeur, cpt;

    printf("Programme D etude Des Boucles\n");
    printf("\nCombien de valeur voulez vous saisir : ");
    scanf("%d", &nbValeur);

    for(cpt = 1; cpt <= nbValeur; cpt ++){
        printf("\nEntrez un nombre %d/%d = ", cpt, nbValeur);
        scanf("%f", &valeur);

        totvaleur += valeur;
    }

    printf("La somme des %d valeurs saisie est = %.2f", nbValeur, totvaleur);
    return 0;
}
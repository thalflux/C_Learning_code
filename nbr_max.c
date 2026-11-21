#include <stdio.h>

int main(){
    int n, valeur, max, position;

    printf("Combien de nombre voulez vous saisir : ");
    scanf("%d", &n);

    printf("Entrez le nomndre 1 : ");
    scanf("%d", &valeur);

    max = valeur;
    position = 1;
    for(int i = 2; i <= n; i++){
        printf("Entrez le nombre %d : ", i);
        scanf("%d", &valeur);

        if(valeur > max){
            max = valeur;
            position = i;
        }
    }

    printf("\n Le plus grand nombre est : %d\n", max);
    printf("Il se trouve a la position %d : ", position);

    return 0;
}
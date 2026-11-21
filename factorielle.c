#include <stdio.h>

int main(){
    int n, fact, cpt;

    printf("Calcul De Factorielle\n");

    printf("Donnez la valeur de n = ");
    scanf("%d", &n);

    fact = 1;

    for(cpt = 1; cpt <= n; cpt ++){
        fact *= cpt;
    }

    printf("Le factorielle de %d est = %d ", n, fact);
    return 0;
}
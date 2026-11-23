#include <stdio.h>

long factorielle(int n) {
    printf("  -> Entree dans factorielle(%d)\n", n);

    // Condition d'arrêt
    if (n <= 1) {
        printf("  [STOP] n = %d (<= 1), on renvoie 1 immediatement sans aller plus loin.\n", n);
        return 1;
    }

    // Appel récursif (Descente)
    printf("  ... factorielle(%d) se met en pause pour calculer %d * factorielle(%d)\n", n, n, n - 1);
    long resultat_precedent = factorielle(n - 1);

    // Calcul au retour (Remontée)
    long resultat_final = n * resultat_precedent;
    printf("  <- Retour dans factorielle(%d) : %d * %ld = %ld\n", n, n, resultat_precedent, resultat_final);

    return resultat_final;
}

int main() {
    for (int i = 0; i <= 6; i++) {
        printf("=== TOUR DE BOUCLE : i = %d ===\n", i);
        long res = factorielle(i);
        printf("RESULTAT FINAL POUR %d! = %ld\n\n", i, res);
    }
    return 0;
}
#include <stdio.h>

void min_max(int t[], int n, int *min, int *max) {
    // On initialise petit et grand (a distance) avec la premiere case
    *min = t[0];
    *max = t[0];
    printf("  [Depart] petit (*min) = %d | grand (*max) = %d\n\n", *min, *max);

    for (int i = 1; i < n; i++) {
        printf("  Tour i = %d (valeur t[%d] = %d) :\n", i, i, t[i]);

        if (t[i] < *min) {
            *min = t[i];
            printf("    -> %d est plus petit : 'petit' devient %d\n", t[i], *min);
        }
        if (t[i] > *max) {
            *max = t[i];
            printf("    -> %d est plus grand : 'grand' devient %d\n", t[i], *max);
        }
    }
}

int main() {
    int t[5] = {8, 3, 15, 6, 11};
    int petit, grand;

    printf("=== APPEL DE min_max AVEC LES ADRESSES DE 'petit' ET 'grand' ===\n");
    min_max(t, 5, &petit, &grand);

    printf("\n=== RETOUR DANS LE MAIN ===\n");
    printf("min (petit) = %d, max (grand) = %d\n", petit, grand);
    return 0;
}
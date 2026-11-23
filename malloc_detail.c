#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    size_t taille_totale = n * sizeof(int);

    printf("=== 1. RESERVATION MEMOIRE (malloc) ===\n");
    printf("  On demande %d cases de %zu octets = %zu octets au total.\n", n, sizeof(int), taille_totale);
    
    int *tab = malloc(taille_totale);

    if (tab == NULL) {
        printf("  [ERREUR] Memoire insuffisante !\n");
        return 1;
    }
    printf("  [OK] Memoire allouee a l'adresse de depart : %p\n\n", (void *)tab);

    printf("=== 2. REMPLISSAGE DU TABLEAU DYNAMIQUE ===\n");
    for (int i = 0; i < n; i++) {
        tab[i] = (i + 1) * 10;
        printf("  tab[%d] recoit (%d + 1) * 10 = %d\n", i, i, tab[i]);
    }

    printf("\n=== 3. AFFICHAGE ===\n");
    for (int i = 0; i < n; i++) {
        printf("  tab[%d] = %d (adresse : %p)\n", i, tab[i], (void *)&tab[i]);
    }

    printf("\n=== 4. LIBERATION (free) ===\n");
    free(tab);
    tab = NULL;
    printf("  Memoire rendue au systeme et pointeur remis a NULL.\n");

    return 0;
}
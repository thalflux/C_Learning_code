#include <stdio.h>

int main() {
    int tab[5] = {10, 25, 30, 45, 50};
    int recherche, i, trouve = 0;

    printf("Quel nombre recherchez-vous : ");
    scanf("%d", &recherche);

    for (i = 0; i < 5; i++) {
        if (tab[i] == recherche) {
            printf("Nombre trouve a la position %d (index %d).\n", i + 1, i);
            trouve = 1;
            break; 
        }
    }

    if (trouve == 0) {
        printf("Le nombre %d n'est pas dans le tableau.\n", recherche);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, i;

    printf("Combien d'elements dans le tableau : ");
    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("\nTableau original : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    printf("\nTableau inverse  : ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
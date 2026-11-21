#include <stdio.h>

int main() {
    int tab[6] = {14, 3, 42, -5, 27, 8};
    int min = tab[0];
    int max = tab[0];
    int i;

    for (i = 1; i < 6; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    printf("Minimum : %d\n", min);
    printf("Maximum : %d\n", max);

    return 0;
}
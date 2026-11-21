#include <stdio.h>

int main() {
    unsigned long long res;
    int cpt, n;
    char reponse;

    do {
        printf("\nVeuillez entrer un nombre pour avoir sa factorielle : ");
        scanf("%d", &n);
        while (getchar() != '\n'); 
        res = 1;
        cpt = 1;

        if (n < 0) {
            printf("La factorielle n'existe pas pour un nombre negatif.\n");
        } else {
            
            if (n > 0) {
                do {
                    res = res * cpt;
                    cpt++;
                } while (cpt <= n);
            }
            printf("%d! = %llu\n", n, res);
        }

        printf("\nVoulez-vous reexecuter le code (O/N) : ");
        reponse = getchar();
        while (getchar() != '\n'); 

    } while (reponse == 'O' || reponse == 'o');

    return 0;
}
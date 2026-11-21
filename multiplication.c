#include <stdio.h>
#include <stdlib.h>
int main(){
    int nombre, resultat, i;
    printf("\n=== Ptogramme Table de multiplication ===");
    printf("\nVeillez entrer un chiffre ou un nombre : ");
    scanf("%d", &nombre);

    for(i = 0; i <= 10; i ++){
        resultat = i * nombre;
        printf("\n%d * %d = %d ", i, nombre, resultat );
    }

    return 0;
}
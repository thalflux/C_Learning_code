#include <stdio.h>

int main(){
    int cel;
    float conversion; 

    printf("Entrez la valeur a convertir (Celcius) : ");
    scanf("%d", &cel);

    conversion = (9.0 / 5.0) * cel + 32;

    printf("Conversion = %.2f ", conversion);

    return 0;
}
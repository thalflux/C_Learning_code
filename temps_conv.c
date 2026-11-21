#include <stdio.h>

int main(){
    int nbrIntSec, nbrCalcHeur, nbrCalcMin, nbrCalcSec;

    printf("=== Programmme De Conversion De Seconde ===");
    printf("\n Veillez entrez le nombre initiale de seconde : ");
    scanf("%d", &nbrIntSec);

    nbrCalcHeur = nbrIntSec / 3600;
    nbrCalcMin = (nbrIntSec % 3600) / 60;
    nbrCalcSec = nbrIntSec % 60;

    printf("\n %d s = %d h: %d m: %d s ", nbrIntSec, nbrCalcHeur, nbrCalcMin, nbrCalcSec);

    return 0;
}
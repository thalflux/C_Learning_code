#include <stdio.h>

int carre(int n){
    int resultat = n * n;
    return resultat;
}

int main(){
    int x = 7;
    int y = carre(x);

    printf("Le carre de %d est %d : ", x, y);
    return 0;
}
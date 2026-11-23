#include <stdio.h>

double moyenne(double a, double b);
void afficher_sparateur();

int main(){
    afficher_sparateur();
    printf("Moyenne de 12.5 et 15 : %.2f\n", moyenne(12.5, 15.0));
    afficher_sparateur();
    return 0;
}

double moyenne(double a, double b){
    return (a + b) / 2.0;
}

void afficher_sparateur(){
    printf("--------------------------------------------\n");
}

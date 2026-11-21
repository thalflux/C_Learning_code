#include <stdio.h>
#include <math.h>


int main(){
    double rayon, calcVolum;
    
    printf("Veillez saisir le rayon de votre sphere : ");
    scanf("%lf", &rayon);
    
    calcVolum = (4 * M_PI * pow(rayon, 3)) / 3;

    printf("Le volume de votre sphere est : Volume = %lf", calcVolum);

    return 0;
}
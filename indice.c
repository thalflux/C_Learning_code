#include <stdio.h>
#include <math.h>
int main(){
    printf("Bienvennue dans le programme qui vous permet de connaitre votre poids ideale\n");

    char sexe; 
    int poids, taille;
    float pi;

    printf("Quel est votre sexe (M/F) : ");
    scanf("%c", &sexe);

    printf("Quel est votre taille (Cm) : ");
    scanf("%d", &taille);

    printf("Quel est votre poids (Kg) : ");
    scanf("%d", &poids);

    if(sexe == 'F' || sexe == 'f'){
        pi = (taille - 100) - (taille - 120) / 4;
        printf("Votre poids ideal est : \n Poids = %.0f",pi);
    }else{
        pi = (taille - 100) - (taille - 150) / 4;
        printf("Votre poids ideal est : \n Poids = %.0f",pi);
    }
    return 0;
}
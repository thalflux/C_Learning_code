#include <stdio.h>

double moyenne(int t[], int n){
    int somme = 0; 

    for (int i = 0; i < n; i++){
        somme += t[i];
    }
    return (double)somme / n;
}

int main(){
    int notes[5] = {12, 15, 9, 18, 14};
    int taille = sizeof(notes) / sizeof(notes[0]);

    for(int i = 0; i < taille; i++){
        printf("notes[%d] = %d\n", i, notes[i]);
    }
    printf("Moyenne = %.1lf\n", moyenne(notes, taille));
    return 0;
}
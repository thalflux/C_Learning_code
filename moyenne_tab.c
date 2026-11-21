#include<stdio.h>

int main(){
    int n, i; 
    float somme, moyenne;

    printf("Combien de nombre voulez vous ajouter : ");
    scanf("%d", &n);
    float nombres[n];
    printf("Entrez les %d nombres : \n ", n);
    somme = 0;
    for( i = 0;  i < n ;  i ++){
        printf("Entrez le nombre %d : ", i + 1);
        scanf("%f", &nombres[i]);
        somme += nombres[i];
    }

    moyenne = somme / n;

    printf("La moyenne des %d nombres ajoutes est :\n Moyenne = %.2f  ", n,  moyenne);

    return 0;
}
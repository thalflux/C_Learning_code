#include <stdio.h>

int compteur = 0; 

void incrementer(){
    int pas = 1 ;  
    compteur += pas;
}

int main(){
    incrementer();
    incrementer();
    incrementer();
    printf("Compteur = %d\n", compteur);
    return 0;
}
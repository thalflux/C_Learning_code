#include <stdio.h>

void ajouter_dix(int n){
    n += 10;
    printf(" Dans la fonction : n = %d\n", n);
}

int main(){
    int note = 5;

    printf("Avant l appel : note = %d\n", note);
    ajouter_dix(note);
    printf("Apres l appel : note = %d\n", note);

    return 0;
};
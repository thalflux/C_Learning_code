#include <stdio.h>

int main(){
    int c1, c2, c3, temp;

    printf("Veillez entrer la valeur de C1 : ");
    scanf("%d", &c1);
    printf("Veillez entrer la valeur de C2 : ");
    scanf("%d", &c2);
    printf("Veillez entrer la valeur de C3 : ");
    scanf("%d", &c3);

    temp = c1;
    c1 = c2; 
    c2 = c3;
    c3 = temp;

    printf("Resultat apres permutation : C1 = %d, C2 = %d, C3 = %d", c1, c2, c3);

    return 0;
}
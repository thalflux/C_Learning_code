#include <stdio.h>

int main(){
    printf("=== Programme de calcule de moyenne et de somme ===\n");

    int note1, note2, note3, note4, note5, somme, moyenne;

    printf("\nVeillez rentrer la note 1 : ");
    scanf("%d", &note1);
    printf("Veillez rentrer la note 2 : ");
    scanf("%d", &note2);
    printf("Veillez rentrer la note 3 : ");
    scanf("%d", &note3);
    printf("Veillez rentrer la note 4 : ");
    scanf("%d", &note4);
    printf("Veillez rentrer la note 5 : ");
    scanf("%d", &note5);

    somme = note1 + note2 + note3 + note4 + note5;
    moyenne = somme / 5;

    printf("\nLa somme des notes est : Somme = %d\n", somme);
    printf("La moyenne des notes est : Moyenne = %d", moyenne);

    return 0 ;

}
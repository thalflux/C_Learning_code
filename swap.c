#include <stdio.h>

void echanger(int *a, int *b){
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main(){
    int x = 3, y = 8;

    printf("Avant : x = %d, y = %d\n", x, y);
    echanger(&x, &y);
    printf("Apres : x = %d, y = %d\n", x, y);
    return 0;
}
#include <stdio.h>

int main(){
    char note = 'B';

    switch (note)
    {
    case 'A':
        printf("Excellent!");
        break;
    case 'B':
    case 'b':
        printf("Tres bien!\n");
        break;
    default:
       printf("A revoir!");
        break;
    }

    return 0;
}
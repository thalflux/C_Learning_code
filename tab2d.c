#include <stdio.h>

int main(){
    int grille[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for(int i = 0; i < 3; i++){ /*Notre ligne ici Nous avons 3 sachant que sa commence a 0*/
        for(int j = 0; j < 4; j++){ /*Notre colonne ici : Nous avons 4 */
            printf("%3d", grille[i][j]);
        }
        printf("\n");
    }
    printf("grille[1][2] = %d\n", grille[1][2]);
    return 0;
}
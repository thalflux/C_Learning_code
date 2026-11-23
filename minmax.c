#include <stdio.h>
/*En tant normale une fonctionne ne peut envoyer qu un seul resultat mais les pointeur nous permettent de passser cette limite */
void min_max(int t[], int n, int *min, int *max){
    *min = t[0];
    *max = t[0];
    for(int i = 1; i < n; i++){
        if(t[i] < *min){
            *min = t[i];
        }
        if(t[i] > *max){
            *max = t[i];
        }
    }
} 

int main(){
    int t[5] = {8, 3, 15, 6, 11};
    int petit, grand;

    min_max(t, 5, &petit, &grand);
    printf("min = %d, max = %d\n", petit, grand);
    return 0;
}
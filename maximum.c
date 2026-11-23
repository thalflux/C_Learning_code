#include <stdio.h>

int indice_du_max(int t[], int n){
    int imax = 0;

    for(int i = 1; i < n; i ++){
        if(t[i] > t[imax]){
            imax = i;
        }
    }
    return imax;
}

int main(){
    int notes[6] = {12, 15, 9, 18, 14, 7};
    int k = indice_du_max(notes, 6);

    printf("Maximun : %d (a l indice %d)\n", notes[k], k);
    return 0;
}
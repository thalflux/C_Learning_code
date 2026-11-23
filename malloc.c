#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *tab = malloc(n * sizeof(int));

    if(tab == NULL){
        printf("Memoire insuffisante\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        tab[i] = (i + 1) * 10;
    }
    for(int i = 0; i < n; i++){
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    free(tab);
    tab = NULL;
    return 0;
}
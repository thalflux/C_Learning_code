#include <stdio.h>

int est_premier(int n){
    if(n < 2){
        return 0;
    }

    for(int d = 2; d * d <= n; d++){
        if(n % d == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    printf("Nombre premiers jusqu' a 30 :\n");
    for(int n = 1; n <= 30; n ++){
        if(est_premier(n)){
            printf("%d\n", n);
        }
    }
    printf("\n");
    return 0;
}

#include <stdio.h>

int main(){
    int t[4] = {10, 20, 30, 40};
    int *p = t;

    for(int i = 0; i < 4; i ++){
        printf("(*p + %d) = %d  t[%d] = %d\n", i, *(p + i), i, t[i]);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int x = 5;
    int *p = NULL;

    if(p == NULL){
        printf("p ne pointe vers rien : on ne le dereference pas\n");
    }
    p = &x;
    if(p != NULL){
        printf("p pointe vers x, *p = %d\n", *p);
    }
    return 0;
}
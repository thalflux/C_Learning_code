#include <stdio.h>

int main(){
    int temperature = 25;

    if(temperature > 20){
        printf("If fait chaud.");
    }else if(temperature > 15)
    {
        printf("Il fait bon.");
    }else{
        printf("Il fait froid.");
    }

    return 0;
}
#include <stdio.h>

int main(){
    int age = 20;
    int *p = &age;

    printf("Valeur de age  : %d\n", age);
    printf("Adresse de age : %p\n", (void *)&age);
    printf("Contenu de p   : %p\n", (void *)p);
    printf("Valeur pointee : %d\n", *p);


    *p = 22;
    printf("Age apres *p = 22 : %d\n", age);
    return 0;
}
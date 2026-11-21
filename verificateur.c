#include <stdio.h>

int main(){
    char c ;
    printf("Verificatuer d entre\n");

    printf("Veillez saisir votre caractere (Ex: a,B,1,&) : ");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z'){
        printf("Lettre majuscule!\n");
    }else if(c >= 'a' && c <= 'z' ){
        printf("Lettre minuscule!\n");
    }else if(c >= '0' && c <= '9'){
        printf("Chiffre\n");
    }else{
        printf("Caractere speciale!\n");
    }
    return 0;
}
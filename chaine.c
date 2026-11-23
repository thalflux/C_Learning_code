#include <stdio.h>
#include <string.h>

int main(){
    char prenom[20] = "Awa";
    char nom[] = "Koffi";
    char complet[40];

    printf("Longueur de \"%s\" : %zu\n", prenom, strlen(prenom));
    printf("taille du tableau nom : %zu octets\n", sizeof(nom));

    strcpy(complet, prenom); /*Ecrase tout ce qu il trouve */
    strcat(complet, " ");/*Ajoute l espace il n ecrase pas */
    strcat(complet, nom);/*Ajoute le nom apres l espace */
    printf("Complet = %s\n", complet);

    if(strcmp(prenom, "Awa") == 0){
        printf("Le prenom est bien Awa\n");
    }
    return 0;
}
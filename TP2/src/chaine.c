#include <stdio.h>

int longueur_chaine(char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

void copier_chaine(char* source, char* destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 
}

void concatener_chaine(char* str1, char* str2, char* resultat) {
    int i = 0;
    
    while (str1[i] != '\0') {
        resultat[i] = str1[i];
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        resultat[i] = str2[j];
        i++;
        j++;
    }
  
    resultat[i] = '\0';
}

int main() {
    char str1[] = "Hello";
    char str2[] = " World!";
    char copie[50];
    char concatenee[100];

    int longueur = longueur_chaine(str1);
    printf("Longueur de la chaîne \"%s\" : %d\n", str1, longueur);

    copier_chaine(str1, copie);
    printf("Chaîne copiée : \"%s\"\n", copie);

    concatener_chaine(str1, str2, concatenee);
    printf("Chaîne concaténée : \"%s\"\n", concatenee);

    return 0;
}

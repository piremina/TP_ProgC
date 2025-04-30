#include <stdio.h>

int main() {
    int n = 5;
    char noms[5][50] = {"Durand", "Balavoine", "Spiecart", "Duverger", "Dagare"};
    char prenoms[5][50] = {"Alice", "Aurelien", "Lucas", "Yevgueni", "Yann"};
    char adresses[5][100] = {
        "10 rue des Lilas",
        "25 avenue Victor Hugo",
        "7 boulevard Haussmann",
        "4 impasse des Fleurs",
        "12 rue de la Paix"
    };
    
    float notes_prog[5] = {15.5, 13.0, 17.2, 14.8, 16.5};  
    float notes_sys[5]  = {14.0, 2.5, 18.0, 13.7, 15.9};  

    for (int i = 0; i < n; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom      : %s\n", noms[i]);
        printf("Prénom   : %s\n", prenoms[i]);
        printf("Adresse  : %s\n", adresses[i]);
        printf("Note en Programmation en C       : %.2f\n", notes_prog[i]);
        printf("Note en Système d'exploitation   : %.2f\n", notes_sys[i]);
        printf("-----------------------------------------\n");
    }

    return 0;
}

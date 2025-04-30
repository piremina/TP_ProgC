#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1; //C
    float note2; //OS
};

int main() {
    struct Etudiant etudiants[5];
    strcpy(etudiants[0].nom, "Durand");
    strcpy(etudiants[0].prenom, "Alice");
    strcpy(etudiants[0].adresse, "10 rue des Lilas");
    etudiants[0].note1 = 15.50;
    etudiants[0].note2 = 14.00;

    strcpy(etudiants[1].nom, "Balavoine");
    strcpy(etudiants[1].prenom, "Aurélien");
    strcpy(etudiants[1].adresse, "25 avenue Victor Hugo");
    etudiants[1].note1 = 13.0;
    etudiants[1].note2 = 2.5;

    strcpy(etudiants[2].nom, "Spiecart");
    strcpy(etudiants[2].prenom, "Lucas");
    strcpy(etudiants[2].adresse, "7 boulevard Haussmann");
    etudiants[2].note1 = 17.20;
    etudiants[2].note2 = 18.00;

    strcpy(etudiants[3].nom, "Duverger");
    strcpy(etudiants[3].prenom, "Yevgueni");
    strcpy(etudiants[3].adresse, "4 impasse des Fleurs");
    etudiants[3].note1 = 14.80;
    etudiants[3].note2 = 13.70;

    strcpy(etudiants[4].nom, "Dagare");
    strcpy(etudiants[4].prenom, "Yann");
    strcpy(etudiants[4].adresse, "12 rue de la Paix");
    etudiants[4].note1 = 16.50;
    etudiants[4].note2 = 15.90;

    // Affichage des informations
    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prénom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 (Programmation en C)       : %.2f\n", etudiants[i].note1);
        printf("Note 2 (Système d'exploitation)   : %.2f\n", etudiants[i].note2);
        printf("--------------------------------------------\n");
    }

    return 0;
}

#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>

void lire_dossier(const char *nom_repertoire) {
    DIR *dir = opendir(nom_repertoire);
    if (dir == NULL) {
        perror("Erreur lors de l'ouverture du répertoire");
        return;
    }

    struct dirent *ent;
    while ((ent = readdir(dir)) != NULL) {
        printf("%s\n", ent->d_name);
    }

    closedir(dir);
}

// cercle.c
#include <stdio.h>
#include <math.h>  // Pour M_PI

int main() {
    double rayon;
    double aire, perimetre;

    // Demander à l'utilisateur d'entrer le rayon
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calcul de l'aire et du périmètre
    aire = M_PI * rayon * rayon;
    perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("Aire du cercle : %.2f\n", aire);
    printf("Périmètre du cercle : %.2f\n", perimetre);

    return 0;
}

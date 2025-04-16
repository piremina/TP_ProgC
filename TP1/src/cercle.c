#include <stdio.h>
#include <math.h>

int main() {
    double rayon; // Utilisation de double pour une meilleure précision

    // Demander à l'utilisateur d'entrer le rayon
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon);

    // Calcul de l'aire et du périmètre
    double aire = M_PI * rayon * rayon;      // Utilisation de M_PI pour la valeur de pi
    double perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("L'aire du cercle est : %.2lf\n", aire);
    printf("Le périmètre du cercle est : %.2lf\n", perimetre);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    double rayon; // Utilisation de double pour une meilleure précision

    // Demander à l'utilisateur d'entrer le rayon
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon); // Utilisation de %lf pour lire un double

    // Calcul de l'aire et du périmètre
    double aire = M_PI * rayon * rayon;      // Utilisation de M_PI pour la valeur de pi
    double perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("L'aire du cercle est : %.2lf\n", aire); // Utilisation de %.2lf pour afficher un double avec 2 décimales
    printf("Le périmètre du cercle est : %.2lf\n", perimetre);

    return 0;
}

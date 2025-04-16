#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);      // Division entière
    printf("a %% b = %d\n", a % b);     // %% pour afficher %

    // Opérateurs de comparaison (affichés sous forme de booléens 0 ou 1)
    printf("a == b ? %d\n", a == b);    // Égalité
    printf("a > b  ? %d\n", a > b);     // Supériorité

    return 0;
}

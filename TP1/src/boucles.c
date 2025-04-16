#include <stdio.h>

int main() {
    int compteur = 5; 

    if (compteur >= 10) {
        printf("Le compteur doit être inférieur à 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0 && j != 1 && j != i)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int compteur = 5; 

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i >= 3 && i != compteur && j != 1 && j != i)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}

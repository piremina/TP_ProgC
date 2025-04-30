#include <stdio.h>

int main() {
    int n = 7; 
    int a = 0, b = 1; 
    int suivant;

    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d", a);
        if (i < n - 1) {
            printf(", ");
        }

        suivant = a + b;
        a = b;
        b = suivant;
    }

    printf("\n");
    return 0;
}

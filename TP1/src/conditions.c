#include <stdio.h>

int main() {
    int somme = 0;  

    for (int i = 1; i <= 1000; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            if (i % 11 == 0) {
                continue;  
            }
            somme += i;
        }

        if (somme > 5000) {
            break;
        }
    }
  
    printf("La somme finale est : %d\n", somme);

    return 0;
}

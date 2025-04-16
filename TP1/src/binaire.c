#include <stdio.h>

int main() {
    int n = 4096;
    int binaire[32];
    int i = 0;

    if (n == 0) {
        printf("Décimal : 0\tBinaire : 0\n");
        return 0;
    }

    while (n > 0) {
        binaire[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binaire : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaire[j]);
    }
    printf("\n");

    return 0;
}

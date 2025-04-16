#include <stdio.h>

int main() {
    int n = 4096;
    printf("Décimal : %d\tBinaire : ", n);

    int bitTrouve = 0;

    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit || bitTrouve || i == 0) {
            bitTrouve = 1;
            printf("%d", bit);
        }
    }

    printf("\n");
    return 0;
}

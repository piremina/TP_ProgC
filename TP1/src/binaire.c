#include <stdio.h>

void afficherBinaire(int nombre) {
    int i;
    int bitTrouve = 0;

    for (i = 31; i >= 0; i--) {
        int bit = (nombre >> i) & 1;  
        
        if (bit == 1 || bitTrouve || i == 0) {
            bitTrouve = 1;
            printf("%d", bit);
        }
    }
    printf("\n");
}

int main() {
    int valeur=0;

    for (int i = 0; i < taille; i++) {
        printf("Décimal : %d\tBinaire : ", valeurs[i]);
        afficherBinaire(valeurs[i]);
    }

    return 0;
}

#include <stdio.h>

struct Couleur {
    unsigned char r;  // Rouge
    unsigned char g;  // Vert
    unsigned char b;  // Bleu
    unsigned char a;  // Alpha
};

int main() {
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff}, 
        {0x2c, 0xc8, 0x64, 0xff},  
        {0x00, 0x00, 0x00, 0xff},  // Noir
        {0xff, 0xff, 0xff, 0xff},  // Blanc
        {0xff, 0x00, 0x00, 0xff},  // Rouge 
        {0x00, 0xff, 0x00, 0xff},  // Vert 
        {0x00, 0x00, 0xff, 0xff},  // Bleu 
        {0x80, 0x80, 0x80, 0xff},  // Gris
        {0xff, 0xa5, 0x00, 0xff},  // Orange
        {0x4b, 0x00, 0x82, 0xff}   // Indigo
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert  : %d\n", couleurs[i].g);
        printf("Bleu  : %d\n", couleurs[i].b);
        printf("Alpha : %d\n", couleurs[i].a);
        printf("-----------------------------\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int d = 0x10001000; 
    int bit28 = (d >> 28) & 1; 
    int bit12 = (d >> 12) & 1;

    int result = (bit28 == 1 && bit12 == 1) ? 1 : 0;

    printf("%d\n", result);
    return 0;
}

// variables.c
#include <stdio.h>

int main() {
    // Types char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // Types short
    short s = -12345;
    unsigned short us = 54321;

    // Types int
    int i = -100000;
    unsigned int ui = 100000;

    // Types long int
    long int li = -1000000L;
    unsigned long int uli = 1000000UL;

    // Types long long int
    long long int lli = -123456789012345LL;
    unsigned long long int ulli = 123456789012345ULL;

    // Types flottants
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    // Affichage des valeurs
    printf("char               : %c\n", c);
    printf("signed char        : %d\n", sc);
    printf("unsigned char      : %u\n", uc);

    printf("short              : %d\n", s);
    printf("unsigned short     : %u\n", us);

    printf("int                : %d\n", i);
    printf("unsigned int       : %u\n", ui);

    printf("long int           : %ld\n", li);
    printf("unsigned long int  : %lu\n", uli);

    printf("long long int      : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("float              : %.2f\n", f);
    printf("double             : %.8f\n", d);
    printf("long double        : %.10Lf\n", ld);

    return 0;
}

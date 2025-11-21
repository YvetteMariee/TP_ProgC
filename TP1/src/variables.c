#include <stdio.h>

int main() {
    // Déclaration et affectation des variables
    signed char c_signed = -100;
    unsigned char c_unsigned = 200;

    signed short s_signed = -30000;
    unsigned short s_unsigned = 60000;

    signed int i_signed = -2000000000;
    unsigned int i_unsigned = 4000000000U;

    signed long int l_signed = -900000000L;
    unsigned long int l_unsigned = 1800000000UL;

    signed long long int ll_signed = -9000000000000000000LL;
    unsigned long long int ll_unsigned = 18000000000000000000ULL;

    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    // Affichage des valeurs
    printf("char signed   : %d\n", c_signed);
    printf("char unsigned : %u\n\n", c_unsigned);

    printf("short signed   : %d\n", s_signed);
    printf("short unsigned : %u\n\n", s_unsigned);

    printf("int signed   : %d\n", i_signed);
    printf("int unsigned : %u\n\n", i_unsigned);

    printf("long int signed   : %ld\n", l_signed);
    printf("long int unsigned : %lu\n\n", l_unsigned);

    printf("long long int signed   : %lld\n", ll_signed);
    printf("long long int unsigned : %llu\n\n", ll_unsigned);

    printf("float       : %f\n", f);
    printf("double      : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}

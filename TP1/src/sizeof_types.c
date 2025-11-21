#include <stdio.h>

int main() {
    printf("Tailles des types de base en C (en octets) :\n\n");

    // Types caractères
    printf("char (signed)        : %lu octet(s)\n", (unsigned long)sizeof(signed char));
    printf("char (unsigned)      : %lu octet(s)\n", (unsigned long)sizeof(unsigned char));

    // Types entiers courts
    printf("short (signed)       : %lu octet(s)\n", (unsigned long)sizeof(signed short));
    printf("short (unsigned)     : %lu octet(s)\n", (unsigned long)sizeof(unsigned short));

    // Types entiers
    printf("int (signed)         : %lu octet(s)\n", (unsigned long)sizeof(signed int));
    printf("int (unsigned)       : %lu octet(s)\n", (unsigned long)sizeof(unsigned int));

    // Types long
    printf("long int (signed)    : %lu octet(s)\n", (unsigned long)sizeof(signed long int));
    printf("long int (unsigned)  : %lu octet(s)\n", (unsigned long)sizeof(unsigned long int));

    // Types long long
    printf("long long (signed)   : %lu octet(s)\n", (unsigned long)sizeof(signed long long int));
    printf("long long (unsigned) : %lu octet(s)\n", (unsigned long)sizeof(unsigned long long int));

    // Types à virgule flottante
    printf("float                : %lu octet(s)\n", (unsigned long)sizeof(float));
    printf("double               : %lu octet(s)\n", (unsigned long)sizeof(double));
    printf("long double          : %lu octet(s)\n", (unsigned long)sizeof(long double));

    return 0;
}

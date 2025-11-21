#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division : %d / %d = %d\n", a, b, a / b);
    printf("Modulo : %d %% %d = %d\n\n", a, b, a % b);

    // Opérateurs de comparaison (résultat 1 = vrai, 0 = faux)
    printf("a égal à b ? %d\n", a == b);
    printf("a supérieur à b ? %d\n", a > b);

    return 0;
}

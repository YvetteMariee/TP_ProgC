#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("Addition : %d\n", a + b);
    printf("Soustraction : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division : %d\n", a / b);
    printf("Modulo : %d\n", a % b);

    // Opérateurs logiques
    bool egal = (a == b);
    bool superieur = (a > b);

    printf("a est égal à b : %d\n", egal);
    printf("a est supérieur à b : %d\n", superieur);

    return 0;
}

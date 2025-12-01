#include <stdio.h>
#include <stdbool.h>

int main() {
    // Déclaration et initialisation des variables
    int a = 16;
    int b = 3;

    printf("--- Variables ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("-----------------\n\n");

    // ➕ Opérateurs Arithmétiques
    printf("--- Opérations Arithmétiques ---\n");

    // Addition
    int addition = a + b;
    printf("Addition (a + b) : %d\n", addition); // Résultat: 19

    // Soustraction
    int soustraction = a - b;
    printf("Soustraction (a - b) : %d\n", soustraction); // Résultat: 13

    // Multiplication
    int multiplication = a * b;
    printf("Multiplication (a * b) : %d\n", multiplication); // Résultat: 48

    // Division (Division entière car a et b sont des entiers)
    int division = a / b;
    printf("Division (a / b) : %d\n", division); // Résultat: 5 (car 16/3 = 5.33...)

    // Modulo
    int modulo = a % b;
    printf("Modulo (a %% b) : %d\n", modulo); // Résultat: 1 (car 16 = 5 * 3 + 1)

    printf("--------------------------------\n\n");

    // ⚖️ Opérateurs de Comparaison (Logiques)
    printf("--- Opérations Logiques (Booléennes) ---\n");

    // Vérifier si a est égal à b (==)
    // En C, '1' représente VRAI et '0' représente FAUX
    bool est_egal = (a == b);
    printf("a est égal à b (a == b) : %d (booléen: %s)\n", est_egal, est_egal ? "Vrai" : "Faux"); // Résultat: 0 (Faux)

    // Vérifier si a est supérieur à b (>)
    bool est_superieur = (a > b);
    printf("a est supérieur à b (a > b) : %d (booléen: %s)\n", est_superieur, est_superieur ? "Vrai" : "Faux"); // Résultat: 1 (Vrai)

    printf("----------------------------------------\n\n");

    return 0;
}

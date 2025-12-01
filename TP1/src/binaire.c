#include <stdio.h>
#include <stdlib.h> // Pour la fonction exit

int main() {
    // 1. Déclaration et initialisation des variables de test
    int num1 = 20; 
    int num2 = 6;  
    char op = '&'; // L'opérateur à tester : essayez '+', '-', '*', '/', '%', '&', '|', ou '~'

    int resultat = 0;

    printf("--- Opérations avec switch ---\n");
    printf("Nombre 1 (num1) : %d\n", num1);
    printf("Nombre 2 (num2) : %d\n", num2);
    printf("Opérateur (op) : %c\n\n", op);

    // 2. Structure switch pour choisir l'opération
    switch (op) {
        // Opérateurs Arithmétiques
        case '+':
            resultat = num1 + num2;
            printf("Résultat de l'Addition : %d\n", resultat);
            break;
        case '-':
            resultat = num1 - num2;
            printf("Résultat de la Soustraction : %d\n", resultat);
            break;
        case '*':
            resultat = num1 * num2;
            printf("Résultat de la Multiplication : %d\n", resultat);
            break;
        case '/':
            // Gérer la division par zéro
            if (num2 == 0) {
                printf("Erreur : Division par zéro !\n");
                return 1; // Termine le programme avec une erreur
            }
            resultat = num1 / num2;
            printf("Résultat de la Division (entière) : %d\n", resultat);
            break;
        case '%':
            // Gérer le modulo par zéro
            if (num2 == 0) {
                printf("Erreur : Modulo par zéro !\n");
                return 1;
            }
            resultat = num1 % num2;
            printf("Résultat du Modulo : %d\n", resultat);
            break;
            
        // Opérateurs de Bits
        case '&':
            resultat = num1 & num2;
            printf("Résultat du ET binaire (&) : %d\n", resultat);
            // Affichage pour l'exemple (20 en binaire = 10100, 6 en binaire = 00110. Résultat = 00100 = 4)
            break;
        case '|':
            resultat = num1 | num2;
            printf("Résultat du OU binaire (|) : %d\n", resultat);
            // Résultat = 11110 = 30
            break;
        case '~':
            // L'opérateur ~ est unaire, il s'applique seulement à num1
            resultat = ~num1;
            printf("Résultat du NON binaire (~) sur num1 : %d\n", resultat);
            // ~20 donne -21 (Complément à deux)
            break;

        // Cas par défaut si l'opérateur n'est pas reconnu
        default:
            printf("Erreur : Opérateur non valide : '%c'\n", op);
            return 1;
    }

    printf("---------------------------\n");
    return 0;
}

#include <stdio.h>

int main() {
    int compteur = 5; // tu peux tester d'autres valeurs < 10
    int i, j;

    for (i = 1; i <= compteur; i++) {
        for (j = 1; j <= i; j++) {
            if (i % 2 == 0 && j < i) {
                printf("# "); // mettre # pour les lignes paires sauf dernière position
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int compteur = 5; // tu peux changer la valeur, mais < 10

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {

            // Première ligne ou dernière ligne : que des *
            if (i == 1 || i == compteur) {
                printf("* ");
            } 
            else {
                // Lignes du milieu : alternance * #
                if (j % 2 == 1) {
                    printf("* ");
                } else {
                    printf("# ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}

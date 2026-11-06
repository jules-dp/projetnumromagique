#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

    int nb;
    srand(time(NULL));
    int random_number = rand() % 100 + 1;

    while (nb != random_number) {
        printf("Choisissez un nombre entre 1 et 100 :\n");
        scanf("%d", &nb);

        if (nb < random_number) {
            printf("C'est plus!\n");

        } else if (nb > random_number) {
            printf("C'est moins!\n");

        } else {
            printf("Gagné!\n");
            break;
        }
    }

    return 0;    
} 
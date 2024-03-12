#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int intInput() { // ici vérifie que ce qui est entré est bien un chiffre et non une lettre
    int number;
    while (scanf("%d", &number) != 1) {
        printf("Veuillez saisir un entier valide : ");
        while (getchar() != '\n');
    }
    return number;
}

void borneMinMax(int* numberMin, int* numberMax) { // là vérifie si au niveau des bornes la valeur min est pas supérieure au max
    printf("Entrez une valeur minimale : ");
    *numberMin = intInput();

    printf("Entrez une valeur maximale : ");
    *numberMax = intInput();

    while (*numberMin > *numberMax) {
        printf("La valeur minimale ne doit pas être supérieure à la valeur maximale. Veuillez réessayer.\n");

        printf("Entrez une nouvelle valeur minimale : ");
        *numberMin = intInput();

        printf("Entrez une nouvelle valeur maximale : ");
        *numberMax = intInput();
    }
}

int intBorne(int numberMin, int numberMax) { // qd on joue vérifie que ce soit bien un chiffre d'entré ENTRE les bornes
    int number;
    while (1) {
        number = intInput();
        if (number >= numberMin && number <= numberMax) {
            break;
        }
        printf("Veuillez saisir un entier entre %d et %d : ", numberMin, numberMax);
    }
    return number;
}

char inputChar() { // vérifie juste si le joueur répond autre chose que ce qui est indiqué (basé sur slide prof)
    char c;
    int iError = scanf(" %c", &c);

    if (iError == 0 || (c != 'y' && c != 'Y' && c != 'n' && c != 'N')) {
        printf("Veuillez saisir 'y', 'n', 'Y' ou 'N'.\n");
        return inputChar();
    } else {
        printf("Vous avez saisi %c\n", c);
        return c;
    }
}

void guessList(int* guessed, int* guessList, int size) { // fonction pour afficher la liste des nombres devinés
    printf("Voici la liste des nombres que vous avez devinés :\n");
    for (int i = 0; i < *guessed; i++) {
        printf("%d ", guessList[i]);
    }
    printf("\n");
}

int main() { // fonction principale du jeu
    srand(time(NULL));
    int numberMin, numberMax;
    char restart;
    bool play = true;

    while (play) {
        borneMinMax(&numberMin, &numberMax);

        int mysteryNumber = numberMin + rand() % (numberMax - numberMin + 1);
        int guessed = 1;
        int guessedNumber = 0;
        int guessedList[10];

        printf("Trouvez le nombre mystère entre %d et %d :\n", numberMin, numberMax);

        while (guessed <= 10) {
            printf("Entrez votre proposition : ");
            guessedNumber = intBorne(numberMin, numberMax);
            guessedList[guessed - 1] = guessedNumber;

            if (guessedNumber == mysteryNumber) {
                printf("Félicitations, vous avez trouvé le nombre mystère en %d essais !\n", guessed);
                guessList(&guessed, guessedList, sizeof(guessedList) / sizeof(guessedList[0])); // renvoie à la fonction toutes les infos (nombres devinés, liste de ces derniers ainsi que taille du tableau I think)
                break;

            } else if (guessedNumber < mysteryNumber) {
                printf("Plus !\n");

            } else {
                printf("Moins !\n");
            }

            if (guessed >= 10) {
                printf("Vous avez dépassé le nombre d'essais autorisés. Le nombre mystère était : %d\n", mysteryNumber);
                guessList(&guessed, guessedList, sizeof(guessedList) / sizeof(guessedList[0]));
                break;
            }
            guessed++;
        }

        printf("Voulez-vous rejouer ? (y/n) : ");
        restart = inputChar();

        if (restart != 'y' && restart != 'Y') {
            play = false;
        }
    }

    return 0;
}

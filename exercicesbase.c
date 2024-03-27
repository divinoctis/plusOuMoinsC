#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

///////////////////////////////////////////// CONDITIONS /////////////////////////////////////////////
//////// EXO 1
/*int main()
{
	int nombre;

	printf("Entrez un nombre: ");
	scanf_s("%d", &nombre);

	if (nombre % 2 == 0)
	{
		printf("Le nombre est pair.");
	}
	else
	{
		printf("Le nombre est impair.");
	}

	return 0;
}*/

//////// EXO 2
/*int main()
{
    int a;
    int b;

    printf("Entrez deux entiers: ");
    scanf_s("%d%d", &a, &b);

    if (a == b)
    {
        printf("%d est égal à %d", a, b);
    }
    else if (a > b)
    {
        printf("%d est supérieur à %d", a, b);
    }
    else
    {
        printf("%d est inférieur à %d", a, b);
    }

    return 0;
}*/

//////// EXO 3
/*int main()
{
    int i, j, k;

    printf("Entrez trois entiers: ");
    scanf_s("%d%d%d", &i, &j, &k);

    if (i > j)
    {
        int l = i;
        i = j;
        j = l;
    }

    if (i > k)
    {
        int l = i;
        i = k;
        k = l;
    }

    if (j > k)
    {
        int l = j;
        j = k;
        k = l;
    }

    printf("%d | %d | %d", i, j, k);

    return 0;
}*/

//////// EXO 4
/*int main()
{
    float i;

    printf("Entrez une valeur: ");
    scanf_s("%f", &i);

    if (i == (int)i)
    {
        printf("Cette valeur est un entier.");
    }
    else
    {
        printf("Cette valeur n'est pas un entier.");
    }

    return 0;
}*/

//////// EXO 5
/*int main()
{
    char c;

    printf("Entrez un caractère: ");
    scanf_s("%c", &c);

    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
    {
        printf("%c : est bien un caractère.\n", c);

        if (c >= 'a' && c <= 'z')
        {
            printf("Ce caractère est en minuscule.");
        }
        else
        {
            printf("Ce caractère est en majuscule.");
        }
    }
    else
    {
        printf("%c : n'est pas un caractère.", c);
    }

    return 0;
}*/

//////// EXO 6
/*int main()
{
    int d, m, y;

    printf("Entrez une date sous le format jj/mm/aaaa: ");
    scanf_s("%d/%d/%d", &d, &m, &y);

    printf("%2d-", d);

    if (m == 1)
    {
        printf("Janvier-");
    }
    if (m == 2)
    {
        printf("Février-");
    }
    if (m == 3)
    {
        printf("Mars-");
    }
    if (m == 4)
    {
        printf("Avril-");
    }
    if (m == 5)
    {
        printf("Mai-");
    }
    if (m == 6)
    {
        printf("Juin-");
    }
    if (m == 7)
    {
        printf("Juillet-");
    }
    if (m == 8)
    {
        printf("Août-");
    }
    if (m == 9)
    {
        printf("Septembre-");
    }
    if (m == 10)
    {
        printf("Octobre-");
    }
    if (m == 11)
    {
        printf("Novembre-");
    }
    if (m == 12)
    {
        printf("Décembre-");
    }

    printf("%d", y);

    return 0;
}*/


///////////////////////////////////////////// BOUCLE ////////////////////////////////////////////

//////// EXO 1
/*int main()
{
    int nombre;
    int i;

    printf("Entrez un nombre: ");
    scanf_s("%d", &nombre);

    for (i = 2; i <= nombre / 2; ++i)
    {
        if (nombre % i == 0)
        {
            printf("Le nombre n'est pas premier.");
            break;
        }
        else
        {
            printf("Le nombre est premier.");
            break;
        }
    }

    return 0;
}*/

//////// EXO 2                                                  (ermmm)
/*int main()
{
    int nombre, max = 0, somme = 0;

    printf("Entrez une série d'entiers positifs inférieurs à 100 qui se terminent par 0: ");

    do {
        scanf_s("%d", &nombre);

        if (nombre > 0 && nombre < 100)
        {
            somme += nombre;

            if (nombre > max)
            {
                max = nombre;
            }
        }
        else if (nombre >= 100)
        {
            printf("Nombre ignoré : %d\n", nombre);
        }
    }

    while (nombre != 0);
    {
        printf("Somme des entiers : %d\n", somme);
        printf("Maximum des entiers : %d\n", max);
    }

    return 0;
}*/

//////// EXO 3
/*int main()
{
    /// à méditer
}*/


///////////////////////////////////////////// TABLEAUX ////////////////////////////////////////////

//////// EXO 1


/*int main() {
    int n;

    printf("Entrez le nombre d'entiers que vous souhaitez saisir: ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez %d entiers inférieurs à 100: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &tableau[i]);
    }

    int *occurrences = (int*)malloc(100 * sizeof(int));

    if (occurrences == NULL)
    {
        printf("Erreur d'allocation de mémoire.\n");
        return 1;
    }

    for (int i = 0; i < 100; i++) // en gros ça initialise les valeurs à 0 dans le tableau pour bien que ça compte
    {
        occurrences[i] = 0;
    }

    for (int i = 0; i < n; i++) // parcourt tableau et incrémente occurences
    {
        occurrences[tableau[i]]++;
    }

    for (int i = 0; i < 100; i++)
    {
        if (occurrences[i] > 0)
        {
            printf("%d est répété %d fois.\n", i, occurrences[i]);
        }
    }

    free(occurrences);
    return 0;
}*/

//////// EXO 2
/*int main() {
    int n;

    printf("Entrez la taille du tableau: ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrez %d entiers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }

    {
        int i, j, temp;

        for (i = 0; i < n - 1; i++) // ici parcours le tableau dès l'index 0, jusqu'à n - 1 car dernière valeur sera forcément la plus grande à la fin du tri.
        {
            for (j = 0; j < n - i - 1; j++) // ici parcours les éléments non triés tant que j est inférieur à n - i - 1..
            {
                if (tab[j] > tab[j + 1]) // refais un échange entre les chiffres dans le tableau en les stockant dans une variable temporaire si la condition est vraie.
                {
                    temp = tab[j];
                    tab[j] = tab[j + 1];
                    tab[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf(" %d |", tab[i]);
        }
        printf("\n");

        return 0;
    }
}*/
//////// EXO 3
/*int main() {
    int n;

    printf("Entrez la taille du tableau: ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrez %d entiers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }


    // tri par insertion

    return 0;
}*/

//////// EXO 4
/*int main() {
    int n = 8;
    int temp;


    int tab[] = { 2, 4, 3, 5, 5, 9, 2, 9 };

    // tri à bulle
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;

            }
        }
      }

    int iCurrentValue = -1;

    for (int i = 0; i < n; i++)
    {
        if (iCurrentValue != tab[i]) {      / au début iCurrentValue vaudra -1 donc on entre dans la boucle, ensuite il prend la valeur de la case du tableau et si cette valeur est en double il rentrera pas donc print pas la valeur en double tant qu'elle est pas différente sur une autre case
            printf("%d | ", tab[i]);
            iCurrentValue = tab[i];
        }

    }

    return 0;
}*/

///////////////////////////////////////////// CHAINES DE CARACTERES ////////////////////////////////////////////

//////// EXO 1
/*int main()
{
    char string[100];

    printf("Entrez une chaîne de caractère: ");
    scanf_s("%s", string);

    int iterateur = 0;
    int longueurChaine = strlen(string);

    for (int i = 0; i < longueurChaine / 2; i++)
    {
        while (string[iterateur] != '\0'){
                if( string[i] != string[longueurChaine - i - 1])
            {
                printf("Cette chaîne de caractère n'est pas palindrome.");
                return 0;
            }
            else
            {
                printf("Cette chaîne de caractère est palindrome.");
                return 1;
            }
        }
    }

    return 0;
}*/

//////// EXO 2
/*int main() {
    char string1[100];
    char string2[100];

    printf("Entrez deux chaînes de caractère : ");
    scanf_s("%s %s", string1, string2);

    int i;

    while (string1[i] != '\0' && string2[i] != '\0')
    {
        if (string1[i] < string2[i])
        {
            printf("%s, %s", string1, string2);
            break;
        }
        else if (string1[i] > string2[i])
        {
            printf("%s, %s", string2, string1);
            break;
        }
        i++;
    }

    return 0;
}*/

//////// EXO 3
/*int main()
{
    char string[100];
    int i;

    printf("Entrez une chaîne de caractère: ");
    scanf_s("%s", string);

    while (string[i] != '\0')
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = toupper(string[i]);
        }

        else
        {
            string[i] = tolower(string[i]);
        }
        i++;
    }

    printf("%s", string);

    return 0;
}*/

///////////////////////////////////////////// STRUCTURE ////////////////////////////////////////////

//////// EXO 1
/*typedef struct Point
{
    int x;
    int y;
} Point;

int main()
{
    Point p;
    int d = 0;

    printf("Veuillez entrer 2 coordonnées: ");
    scanf_s("%d%d", &p.x, &p.y);

    if (p.x > p.y)
    {
        d = p.x - p.y;
    }
    else
    {
        d = p.y - p.x;
    }

    printf("La distance entre le point %d et %d est de %d", p.x, p.y, d);

    return 0;
}*/

//////// EXO 2
typedef struct Etudiant
{
    char nom;
    char prenom;
    int note;
}Etudiant;

int main()
{
    Etudiant data;

    printf("Veuillez entrer votre nom, prénom et une note sur 20: ");
    scanf_s("%c%c%d", &data.nom, &data.prenom, &data.note);

    int listeEtudiant[100];

    return 0;
}

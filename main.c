#include <stdio.h>
#include "library.h"

int main()
{
    printf("Lecture d'une chaine de 10 caractere: ");
    char * saisie = lireSting(10);
    printf("saisie: %s\n", saisie);

    printf("Lecture d'un long: ");
    long l = lire_long();
    printf("saisie: %ldl\n", l);

    printf("Lecture d'un int: ");
    int i = lire_int();
    printf("saisie: %d\n", i);

    return 0;
}

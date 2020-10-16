#include "library.h"

//
// Created by dimit on 16/10/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* chaine;

void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF) c = getchar();
}

char* lireSting(int longueur)
{
    free(chaine);

    chaine = (char*) malloc(longueur);

    fgets(chaine, longueur, stdin);

    char* positionEntree = strchr(chaine, '\n');

    if (positionEntree != NULL) *positionEntree = '\0';
    else                        viderBuffer();

    return chaine;
}

long lire_long()
{
    char* tmp = lireSting(15);

    return strtol(tmp, NULL, 10);
}

int lire_int()
{
    return lire_long();
}

double lire_double()
{
    char* tmp = lireSting(100);

    return strtod(tmp, NULL);
}
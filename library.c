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

long lire_long( int base )
{
    char* tmp = lireSting(100);

    if ( base != 2 && base != 8 && base != 16 && base != 64 ) base = 10;

    return strtol(tmp, NULL, base);
}

int lire_int()
{
    return lire_long(10);
}

double lire_double()
{
    char* tmp = lireSting(100);

    return strtod(tmp, NULL);
}

long long lire_llong( int base )
{
    if ( base != 2 && base != 8 && base != 16 && base != 64 ) base = 10;

    return strtoll(lireSting(100), NULL, base);
}

long double lire_ldouble()
{
    return strtold(lireSting(100), NULL);
}

unsigned long lire_ulong( int base )
{
    if ( base != 2 && base != 8 && base != 16 && base != 64 ) base = 10;

    return strtoul(lireSting(100), NULL, base);
}

unsigned long long lire_ullong( int base )
{
    if ( base != 2 && base != 8 && base != 16 && base != 64 ) base = 10;

    return strtoull(lireSting(100), NULL, base);
}
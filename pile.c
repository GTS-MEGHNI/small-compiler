#include <stdio.h>
#include <stdlib.h>

typedef struct Pile Pile;
struct Pile
{
    char *MGP;
    char *nom;
    int type;
    Pile *suiv;
};
///____________________________________________________________________________________________________________
void stack(Pile **pile,char *MGP,char *nom,int type)
{
    Pile *elm = malloc(sizeof(Pile));
    elm->MGP = MGP; elm->nom = nom; elm->type = type;
    if(*pile == NULL)
    {
        *pile = malloc(sizeof(Pile));
        elm->suiv = NULL;
        *pile = elm;
    }
    else
    {
        elm->suiv = *pile;
        *pile = elm;
    }
}
///____________________________________________________________________________________________________________
Pile *unstack(Pile **pile)
{
    if(*pile == NULL) exit(EXIT_FAILURE);
    Pile *trash = *pile;
    Pile *peak = malloc(sizeof(Pile));
    peak->MGP = trash->MGP; peak->nom = trash->nom; peak->type = trash->type;
    *pile = (*pile)->suiv;
    free(trash);
    return peak;
}
///_______________________________________________________________________________________







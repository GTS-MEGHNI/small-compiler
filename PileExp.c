#include <stdio.h>
#include <stdlib.h>

typedef struct PileExp PileExp;
struct PileExp
{
    char *val;
    PileExp *suiv;
};
///____________________________________________________________________________________________________________
void stackExp(PileExp **pile,char *val)
{
    PileExp *elm = malloc(sizeof(PileExp));
    elm->val = val;
    if(*pile == NULL)
    {
        *pile = malloc(sizeof(PileExp));
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
PileExp *unstackExp(PileExp **pile)
{
    if(*pile == NULL) return NULL;
    PileExp *trash = *pile;
    PileExp *peak = malloc(sizeof(PileExp));
    peak->val = trash->val;
    *pile = (*pile)->suiv;
    free(trash);
    return peak;
}
///_______________________________________________________________________________________






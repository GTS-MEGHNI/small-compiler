///Nom : M E G H N I
///Prénom : Mohamed El Amine
///Mat : 2015 0000 8875
///Section : SII G2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Structure element
typedef struct lib lib;

struct lib
{
    char *Nom;
    lib *svt;
};
///____________________________________________________________________________________________________________
void insererLib(lib **liste,char *ch)
{
    lib *nv = malloc(sizeof(lib));
    nv->Nom = ch;
    if(*liste == NULL)
    {
        *liste = malloc(sizeof(lib));
        nv->svt = NULL;
        *liste = nv;
    }
    else
    {
        lib *r = *liste;
        while(r->svt != NULL)
        {
            r = r->svt;
        }
        r->svt = nv;
        nv->svt = NULL;

    }
}
///__________________________________________________________________________________________________________
int chercherLib(lib *liste,char *ch)///return 1 if found, 0 else
{
    while(liste != NULL)
    {
        if(strcmp(liste->Nom,ch) == 0)
        {
            return 1;
        }
        else liste = liste->svt;
    }
    return 0;
}




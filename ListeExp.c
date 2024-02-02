#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Structure element
typedef struct ListeExp ListeExp;

struct ListeExp
{
    char exp[256];
    char var[256];
    ListeExp *svt;
};

void insererExp(ListeExp **liste,char exp[],char var[])
{
    ListeExp *nv = malloc(sizeof(ListeExp));
    strcpy(nv->exp,exp);
    strcpy(nv->var,var);
    if(*liste == NULL)
    {
        *liste = malloc(sizeof(ListeExp));
        *liste = nv;
    }
    else
    {
        ListeExp *r = *liste;
        while(r->svt != NULL)
        {
            r = r->svt;
        }
        r->svt = nv;
    }
     nv->svt = NULL;

}

ListeExp *chercherExp(ListeExp *liste,char exp[])///return 1 if found, 0 else
{
    while(liste != NULL)
    {
        if(strcmp(liste->exp,exp) == 0)
        {
            printf("==>>>> %s ==> %s\n",liste->exp,exp);
            return liste;
        }
        else liste = liste->svt;
    }
    return NULL;
}

void AfficherListeExp(ListeExp *liste)
{
    while(liste != NULL)
    {
        liste = liste->svt;
    }
    printf("____________________________\n");
}

int CalculOccVar(ListeExp *liste,char var[])
{
    int s = 0;
    while(liste != NULL)
    {
        if(strcmp(liste->var,var) == 0) s++;
        liste = liste->svt;
    }
    return s;
}




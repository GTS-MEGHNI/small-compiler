#include <stdio.h>
#include <stdlib.h>


typedef struct ListeCons ListeCons;

struct ListeCons
{
    char *nom;
    char *val;
    ListeCons *svt;
};

void ajouterCons(ListeCons **liste,char *nom,char *val)
{
    ListeCons *elm = malloc(sizeof(ListeCons));
    elm->nom   = nom;
    elm->val   = val;
    if(*liste == NULL)
    {
        *liste = malloc(sizeof(ListeCons));
        *liste = elm;
    }
    else
    {
        ListeCons *r = *liste;
        while(r->svt != NULL)
        {
            r = r->svt;
        }
        r->svt = elm;
    }
    elm->svt = NULL;
}

void afficher_Cons(ListeCons *liste)
{
    int i = 1;
    while(liste != NULL)
    {
        printf("%d-(%s,%s)\n",i,liste->nom,liste->val);
        i++;
        liste = liste->svt;
    }
}

ListeCons *chercherCons(ListeCons *liste,char *nom)///return the structure if found / return NULL else
{
    while(liste != NULL)
    {
        if(strcmp(liste->nom,nom) == 0)
        {
            return liste;
        }
        else liste = liste->svt;
    }
    return NULL;
}









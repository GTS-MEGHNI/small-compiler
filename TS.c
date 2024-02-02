///Nom : M E G H N I
///Prénom : Mohamed El Amine
///Mat : 2015 0000 8875
///Section : SII G2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Structure element
typedef struct element element;

struct element
{
    char *Nom;
    int type; ///Integer(1) or Real(0)
    int nature; ///var(1) or const(0) or array(2)
    int taille;
    element *svt;
};
///____________________________________________________________________________________________________________
void inserer(element **liste,char *ch,int ty,int n,int taille)
{
    element *nv = malloc(sizeof(element));
    nv->Nom = ch;
    nv->type = ty;
    nv->nature = n;
    nv->taille = taille;
    if(*liste == NULL)
    {
        *liste = malloc(sizeof(element));
        nv->svt = NULL;
        *liste = nv;
    }
    else
    {
        element *r = *liste;
        while(r->svt != NULL)
        {
            r = r->svt;
        }
        r->svt = nv;
        nv->svt = NULL;

    }
}
///____________________________________________________________________________________________________________
void insererTaille(element *liste,char *ch,int taille)
{
	while(liste != NULL)
	{
		if(strcmp(liste->Nom,ch) == 0)
		{
			liste->taille = taille;
		}
		liste = liste->svt;
	}


}

///___________________________________________________________________________________________
int chercher(element *liste,char *ch)///return 1 if found, 0 else
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
///_____________________________________________________________________________________________________________
void afficher(element *liste)
{
    int i = 1;
    while(liste != NULL)
    {
        printf("------->DEC N %d\n",i);
        printf("NOM : %s\n",liste->Nom);
        if(liste->type == 1) printf("TYPE : ENTIER\n");
        else printf("TYPE : REEL\n");
        if(liste->nature == 1) printf("NATURE : VARIABLE\n");
        else if (liste->nature == 0)printf("NATURE : CONSTANTE\n");
        else
        {
        	printf("NATURE : TABLEAU\n");
        	printf("Taille : %d\n",liste->taille);
        }
        printf("_____________________________________________\n\n");
        liste = liste->svt;
        i++;
    }

}
///____________________________________________________________________________________________________________
int memeType(int a,int b)
{
    if (a == b) return 1; else return 0;
}
///____________________________________________________________________________________________________________
int Type(element *list,char *ch)
{
  while(list != NULL)
  {
        if(strcmp(list->Nom,ch) == 0)
        {
            return list->type;
        }
        else list = list->svt;
  }
}
///____________________________________________________________________________________________________________
int Nature(element *list,char *ch)
{
  while(list != NULL)
  {
        if(strcmp(list->Nom,ch) == 0)
        {
            return list->nature;
        }
        else list = list->svt;
  }
}
///______________________________________________________________________________________________________
int getTailleArray(element *list,char *ch)
{
    while(list!=NULL)
    {
        if(strcmp(list->Nom,ch) == 0)
        {
            return list->taille;
        }
        else list = list->svt;
    }
}
//______________________________________________________________________________________________________
int IsArray(element *list,char *ch)
{
	while(list!=NULL)
    {
        if(strcmp(list->Nom,ch) == 0)
        {
            if(list->taille != 0) return 1;
			else return 0;
        }
        else list = list->svt;
    }
}




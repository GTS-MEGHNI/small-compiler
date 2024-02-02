#include <stdio.h>
#include <stdlib.h>

typedef struct Quad Quad;

struct Quad
{
    char *op;
    char *op1;
    char *op2;
    char *res;
    int N;
    Quad *svt;
    Quad *prec;
};
///______________________________________________________________________
void ajouter(Quad **quad,char *op,char *op1,char *op2,char *res)
{
    Quad *elm = malloc(sizeof(Quad));
    elm->op   = op; elm->op1  = op1; elm->op2  = op2; elm->res  = res;
    int S = 2;
    if(*quad == NULL)
    {
        *quad = malloc(sizeof(Quad));
        *quad = elm;
        (*quad)->N = 1;
        (*quad)->prec = NULL;
    }
    else
    {
        Quad *r = *quad;
        while(r->svt != NULL)
        {
            r = r->svt;
            S++;
        }
        r->svt = elm;
        elm->N = S;
        elm->prec = r;
    }
    elm->svt = NULL;
}
///____________________________________________________________________________________________________________
int nbrQuad(Quad *quad)
{
    int S = 0;
    while(quad != NULL)
    {
        S++; quad = quad->svt;
    }
    return S;
}
///____________________________________________________________________________________________________________
Quad *getQuad(Quad *quad,int pos)
{
    ///if(nbrQuad(quad) == 0 || pos <= 0 || pos > nbrQuad(quad)
    if(nbrQuad(quad) == 0){
        printf("FATAL ERROR : EMPTY LIST\n");
        exit(EXIT_FAILURE);
    }
    if (pos <= 0 || pos > nbrQuad(quad))
    {
        printf("FATAL ERROR : %d OUT OF RANGE\n",pos);
        exit(EXIT_FAILURE);
    }
    else
    {
        int i = 1;
        while(i < pos)
        {
            quad = quad->svt;
            i++;
        }
        return quad;
    }
}
///____________________________________________________________________________________________________________
void afficher_Quad(Quad *quad)
{
    int i = 1;
    while(quad != NULL)
    {
        printf("%d-(%s,%s,%s,%s)\n",i,quad->op,quad->op1,quad->op2,quad->res);
        quad = quad->svt;
        i++;
    }
}

void afficher_1Quad(Quad *quad)
{
    printf("(%s,%s,%s,%s)\n",quad->op,quad->op1,quad->op2,quad->res);   
}

int OccuVal(Quad *quad,char *val)
{
    int i = 0;
    if(quad != NULL)
    {
        while(quad != NULL)
        {
            if(strcmp(quad->res,val) == 0 || strcmp(quad->op1,val) == 0
                || strcmp(quad->op2,val) == 0)
            {
                i++;
            }    
            quad = quad->svt;
        }
    }
    return i;
}

int PosVar(Quad *quad,char *val)
{
    int i = 1;
    while(quad != NULL)
    {
        if(strcmp(quad->res,val) == 0 || strcmp(quad->op1,val) == 0 ||
            strcmp(quad->op2,val) == 0) 
        {
            return i;
        }
        else 
        {
            i++;
            quad = quad->svt;
        }
    }
}

void TrashQuad(Quad **quad, int pos,int *QC)
{
    int i = 1;
    *QC = *QC - 1;
    if(*quad == NULL || pos <= 0)
    {
        printf("FATAL ERROR");
    }
    else
    {
        if(pos == 1) ///delete first element
        {
            Quad *trash = *quad;
            if((*quad)->svt != NULL)
            {
                *quad = (*quad)->svt;
                (*quad)->prec = NULL;
            }
            else *quad = NULL;
            free(trash);
        }
        else
        {
            Quad *r = *quad,*trash,*prec;
            while(i < pos)
            {
                prec = r;
                r = r->svt;
                i++;
            }
            trash = r;
            prec->svt = r->svt;
            if(r->svt != NULL)
            {
                r->svt->prec = prec;
            }
           free(trash);
        }
        ///Update All BR
        Quad *r = *quad;
        Quad *s;
        int j = 1,k,z;
        char *str;
        while(r != NULL)
        {
            if(strcmp(r->op,"BR") == 0 || strcmp(r->op,"BNZ") == 0
                || strcmp(r->op,"BZ") == 0 || strcmp(r->op,"BNZ") == 0)
            {
                /// j = position OF BR
                /// i = position OF Element to deleted
                s = getQuad(*quad,j);

                if(j < i)
                {
                    /// k = The Pos of Quad to jump in
                    k = atoi(s->op1);

                    if(k > i)
                    {
                        z = k - 1;
                        str = malloc(sizeof(int));
                        sprintf(str,"%d",z);
                        s->op1 = str;
                    }
                    else
                    {
                        /* */
                    }
                }
                else
                {
                    /// k = The Pos of Quad to jump in
                    k = atoi(s->op1);

                    if(k > i)
                    {
                        z = k - 1;
                        str = malloc(sizeof(int));
                        sprintf(str,"%d",z);
                        s->op1 = str;
                    }
                    else if(k <= i)
                    {
                       /* */
                    }
                }

            }
            r = r->svt;
            j++;
        }
    }
}

int IsOnlyAssignement(Quad *quad, char *str)
{
    int ok = 1;
    if(quad != NULL)
    {
        while(quad != NULL && ok)
        {
            if(strcmp(quad->op1,str) == 0 || strcmp(quad->op2,str) == 0) ok = 0;
            quad = quad->svt;
        }
        return ok;
    }
    else printf("ERROR : EMPTY QUAD LIST");
}


int StillExistAsAssignement(Quad *quad,char *str)
{
    int ok = 0;
    while(quad != NULL && ok == 0)
    {
        if(strcmp(quad->res,str) == 0) ok = 1;
        else quad = quad->svt;
    }
    return ok;
}


void FreeQuad(Quad **quad,element *liste,int *QC)
{
    if(*quad == NULL || liste == NULL)
    {
        printf("ERROR : AUCUN CODE A OPTIMISER\n\n");
    }
    else 
    {
        //Save useless variables into an array
        char Var[256][256];
        char str[256];
        int size = 0;
        int ty = 0;
        element *p = liste;
        Quad *q,*cont;
        int codePremierQuad,k;
        while(p != NULL)
        { 
            strcpy(str,"");
            if(OccuVal(*quad,p->Nom) >= 1 &&  IsOnlyAssignement(*quad,p->Nom))
            {
                q = getQuad(*quad,PosVar(*quad,p->Nom));
                if(strcmp(q->res,p->Nom) == 0) //Confirmer que elle est non utilisée
                {
                    printf("AVERTISSEMENT : VARIABLE %s NON UTILISEE\n",p->Nom);
                    strcat(str,p->Nom);
                    //ajouter str dans le tableau
                    for(size = 0; size < strlen(str); size++)
                    {
                        Var[ty][size] = str[size];
                    }
                    ty++;
                }  
            }
            p = p->svt;
        }
        //
        if(ty == 1)
        {
            //Une seule variable à supprimer
            //
            if(IsOnlyAssignement(*quad,Var[0]))
            {
                int g = 1;
                while(StillExistAsAssignement(*quad,Var[0]))
                {
                    q = getQuad(*quad,PosVar(*quad,Var[0]));
                    codePremierQuad = PosVar(*quad,Var[0]);
                    q = q->prec;
                    if(q != NULL)
                    {
                        while(q != NULL && (strcmp(q->op,"+") == 0 || strcmp(q->op,"-") == 0 
                        || strcmp(q->op,"*") == 0 || strcmp(q->op,"/") == 0 ))
                        {
                            codePremierQuad--;
                            q = q->prec;
                            if(q == NULL) break;
                        }

                        int y = PosVar(*quad,Var[0]);
                        int v = codePremierQuad;
                        for(k = codePremierQuad; k <= y; k++)
                        {
                        TrashQuad(quad,v,QC);
                        }
                    }
                    else
                    {
                        TrashQuad(quad,1,QC);
                    }
                }
            }
            //
        }
        else
        {
            int g;
            for(size = 0; size < ty; size++)
            {
                if(IsOnlyAssignement(*quad,Var[size]))
                {
                    while (StillExistAsAssignement(*quad,Var[size]))
                    {
                        q = getQuad(*quad,PosVar(*quad,Var[size]));
                        codePremierQuad = PosVar(*quad,Var[size]);
                        q = q->prec;
                        if(q != NULL)
                        {
                            codePremierQuad = PosVar(*quad,Var[size]);
                            while(q != NULL && (strcmp(q->op,"+") == 0 || strcmp(q->op,"-") == 0 
                                || strcmp(q->op,"*") == 0|| strcmp(q->op,"/") == 0))
                            {
                                codePremierQuad--;
                                q = q->prec;
                                if(q == NULL) break;
                            }
                            int y = PosVar(*quad,Var[size]);
                            int v = codePremierQuad;
                            for(k = codePremierQuad; k <= y; k++)
                            {
                                TrashQuad(quad,v,QC);
                            }
                        }
                        else
                        {
                            TrashQuad(quad,1,QC);
                        }
                    }
                }
            }           
        }
    }
}



   
















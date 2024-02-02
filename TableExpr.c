///Nom : M E G H N I
///Prénom : Mohamed El Amine
///Mat : 2015 0000 8875
///Section : SII G2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Expression Expression;

struct Expression
{
    ///Variable
    char var[256];

    ///Codified Expression
    char exp[256];

    ///Flag to determine if the expression contains only numbers
    int IsNumeric;

    ///Store the beginning of the recent QC of the affectation
    int QcBegin;

    ///Store the end of the recent QC of the affectation
    int QcFin;

    ///Storing the list of variables contained in the affectation if the Numeric flag is set to 0
    char ListeVar[256][256];

    ///Number of variable used in the affectation
    int nbVar;

    Expression *svt;

};

void InsererExp(Expression **expr,char var[],char exp[],int IsNumeric,int QcBegin,int QcFin,char (*ListeVar)[256],int nbVar)
{
    Expression *nv = malloc(sizeof(Expression));
    strcpy(nv->var,var);
    strcpy(nv->exp,exp);
    nv->IsNumeric = IsNumeric;
    nv->QcBegin = QcBegin;
    nv->QcFin = QcFin;
    nv->nbVar = nbVar;

    int i,j;
    char str[256][256];
    for(i = 0; i < 256; i++)
    {
        for(j = 0; j < 256; j++)
        {
            nv->ListeVar[i][j] = ListeVar[i][j];
        }
    }
    if(*expr == NULL)
    {
        *expr = malloc(sizeof(Expression));
        *expr = nv;
    }
    else
    {
        Expression *r = *expr;
        while(r->svt != NULL)
        {
            r = r->svt;
        }
        r->svt = nv;
    }
    nv->svt = NULL;

}

void AfficherExpr(Expression *expr)
{
    while(expr != NULL)
    {
        printf("Variable : %s\n",expr->var);
        printf("Expression : %s\n",expr->exp);
        printf("Numeric : %d\n",expr->IsNumeric);
        printf("QCBegin : %d\n",expr->QcBegin);
        printf("QCFin : %d\n",expr->QcFin);
        if(expr->IsNumeric == 0)
        {
            printf("Liste des variables utilisees\n");
            int i,j;
            for(i = 0; i < expr->nbVar; i++)
            {
                printf("Variable N %d : %s\n",i+1,expr->ListeVar[i]);
            }
        }
        expr = expr->svt;
        printf("__________________________________________________________\n");
    }
}


Expression *ChercherVar(Expression *expr,char var[])
{

    while(expr != NULL)
    {
        if(strcmp(expr->var,var) == 0) return expr;
        expr = expr->svt;
    }
    return NULL;
}

Expression *ChercherExpr(Expression *expr,char exp[])
{

    while(expr != NULL)
    {
        if(strcmp(expr->exp,exp) == 0) return expr;
        expr = expr->svt;
    }
    return NULL;
}

int IsNumeric(char exp[])
{
    int i;
    char a;
    int IsNumeric = 1;

    for(i = 0; i < strlen(exp) && IsNumeric; i++)
    {
       for(a = 'a'; a <= 'z' && IsNumeric; a++)
       {
          if(exp[i] == a) IsNumeric = 0;
       }
       for(a = 'A'; a <= 'Z' && IsNumeric; a++)
       {
          if(exp[i] == a) IsNumeric = 0;
       }

    }
    return IsNumeric;
}

void Add(char (*T)[256],char str[], int pos)
{

    int i;

    for(i = 0; i < strlen(str); i++)
    {
        T[pos][i] = str[i];
    }

}

int Exist(char (*T)[256],char str[], int size)
{
    int i = 0,found = 0;

    while(i < size && !found)
    {
        if(strcmp(T[i],str) == 0) found = 1;
        else i++;
    }
    return found;
}











#include "math.h"
#include "Operations.h"

int addition(int a, int b)
{
	int resultat;

	resultat = a + b;

	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;

	resultat = a - b;

	return;
}
int division(int a, int b)
{
    return(a/b);
}

int multiplication(int a,int b)
{
    return(a*b);
}

int factoriel(int nb)
{
    int result=nb;
    for (int i=nb;i>0;i--)
    {
        result = result*i;
    }
    return result;
}

int Distance(int x,int y)
{
    int result_carre;
    float result;
    result_carre= x*x+y*y;
    result= sqrt(result_carre);

    return result;
}

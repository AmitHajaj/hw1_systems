#include "myMath.h"

double Exponent(int x)
{
    double e = 2.7182;
    int i;
    double result = e;

    for (i = 1; i < x; i++)
    {
        result = result*e;
    }
    
    return result;
}

double Power(double x, int y)
{
    double result = x;
    int i;
    
    for (i=1; i<y; i++)
    {
    	result = result*x;
    }

    return result;
}

#include <stdio.h>
#include "myMath.h"
#include "basicMath.c"
#include "power.c"

int main()
{
    double in;

    printf("please insert a real number.");
    scanf("%lf", &in);
    
    int n =(int)(in<0 ? (in-0.5) : (in+0.5));

    printf("The value of f(x)= e^x+x^3-2 at the point %lf is: %f\n", in, addition(addition((float)Exponent(n), (float)Power(in, 3)), (float)(-2.0)));

    printf("The value of f(x)= (3)x+(2)x^2 at the point %lf is: %f\n", in, addition((float)mul(in, 3), (float)mul(Power(in, 2), 2)));

    printf("The value of f(x)= ((4)x^3)/5-(2)x at the point %lf is: %f\n", in, addition(((float)div(mul(Power((double)in, 3), 4), 5)), ((float)mul((double)in, (-2)))));
    
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    double G,F,Y,x,a;
    const double pi=3.1416;

    scanf("%f", &a);
    scanf("%f", &x);

    G=3*(-3*a*a+2*a*x+21*x*x)/35*a*a+37*a*x+6*x*x;
    F=1/cos(3*a*a+5*a*x+2*x*x);
    Y=acosh(-12*a*a-4*a*x+x*x+1);

    printf("%f\n", G);
    printf("%f\n", F);
    printf("%f\n", Y);

    return 0;
}
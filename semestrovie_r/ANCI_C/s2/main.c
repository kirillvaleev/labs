#include <math.h>
#include <stdio.h>


double f(double x) {
    return (x * x - 70 * x + 600);
}

int main() {
    int n = 0;
    double a, b, c = 0, spray;
    printf("A: ");
    scanf("%lf", &a);
    printf("B: ");
    scanf("%lf", &b);
    printf("Погрешность: ");
    scanf("%lf", &spray);
    while (fabs(a - b) >= spray) {
        c = (a + b) / 2;
        if (f(c) * f(a) < 0)
            a = c;
        else b = c;
        n += 1;
    }
    printf("С = %lf\n", c);
    return 0;
}
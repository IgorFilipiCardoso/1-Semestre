#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c);
double bhaskara1(double a, double b, double c);
double bhaskara2(double a, double b, double c);

int main()
{
    
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (delta(a, b, c) <= 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5f\n", bhaskara1(a, b, c));
        printf("R2 = %.5f\n", bhaskara2(a, b, c));
    }
    
    return 0;
}

double delta(double a, double b, double c)
{
    return pow(b ,2) - (4 * a * c);
}
double bhaskara1(double a, double b, double c)
{
    return ((-b) + sqrt(delta(a, b, c))) / (2 * a);
}
double bhaskara2(double a, double b, double c)
{
    return ((-b) - sqrt(delta(a, b, c))) / (2 * a);
}


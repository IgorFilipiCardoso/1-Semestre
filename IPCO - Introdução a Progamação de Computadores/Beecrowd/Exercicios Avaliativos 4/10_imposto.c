#include <stdio.h>

double imposto(double salario);

int main()
{
    
    double salario;

    scanf("%lf", &salario);

    if (salario <= 2000)
    {
        printf("Isento\n");
    }
    else
    {
        printf("R$ %.2lf\n", imposto(salario));
    }
    

    return 0;
}

double imposto(double salario)
{

    double imposto;



    if (salario <= 3000)
    {
        imposto = (salario - 2000) * 0.08;
    }
    else if (salario > 3000 && salario <= 4500)
    {
        imposto = 1000 * 0.08;
        imposto = imposto + ((salario - 3000) * 0.18);
        
    }
    else if (salario > 4500)
    {
        imposto = 1000 * 0.08;
        imposto = imposto + (1500 * 0.18);
        imposto = imposto + ((salario - 4500) * 0.28);  
    }
    

    return imposto;

}
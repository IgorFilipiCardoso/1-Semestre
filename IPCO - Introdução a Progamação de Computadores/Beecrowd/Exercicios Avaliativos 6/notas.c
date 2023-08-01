#include <stdio.h>

double nota();
double average(double grade1, double grade2);
int continuar();
 
int main() {
 
    int i;
    double grade1, grade2;

    while (i != 2)
    {
        grade1 = nota();
        grade2 = nota();

        printf("media = %.2f\n", average(grade1, grade2));

        i = continuar();
    }
    return 0;
}

double nota()
{
    double grade = -1;

    while (grade > 10 || grade < 0)
    {
        scanf("%lf", &grade);

        if (grade > 10 || grade < 0)
        {
            printf("nota invalida\n");
        }
    }

    return grade;
}
double average(double grade1, double grade2){
    return (grade1 + grade2) / 2;
}
int continuar()
{
    int resposta = 0;

    while (resposta != 1 && resposta != 2)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &resposta);
    }
    
    return resposta;
}
#include <stdio.h>

int ano(matricula);
int semestre(matricula);


int main()
{
    
    int matricula, anos;

    printf("\nDigite o numero da matricula: ");
    scanf("%d", &matricula);

    anos = ano(matricula);

    if (anos > 23)
    {
        printf("\nMatriculado no ano de %d e no %d semestre!\n\n", (ano(matricula) + 1900), semestre(matricula));
    }
    else
    {
        printf("\nMatriculado no ano de %d e no %d semestre!\n\n", (ano(matricula) + 2000), semestre(matricula));

    }

    return 0;
}

int ano(matricula){
    int ano;

    ano = matricula / 100000;
    return ano;
}
int semestre(matricula){
    int semestre;

    semestre = matricula / 10000;
    semestre = semestre - (ano(matricula) * 10);
    return semestre;
}
#include <stdio.h>

float weighted_avg(float grade1, float grade2, float grade3, float grade4);
float averege(float avg_wei, float test);

int main()
{
    float grade1,grade2,grade3,grade4;
    float avg_wei, avg, test;

    scanf("%f %f %f %f", &grade1, &grade2, &grade3, &grade4);

    avg_wei = weighted_avg(grade1, grade2, grade3, grade4);

    printf("Media: %.1f\n", avg_wei);

    if (avg_wei >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg_wei < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");

        scanf("%f", &test);
        printf("Nota do exame: %.1f\n", test);

        avg = averege(avg_wei, test);

        if (avg >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1f", avg);

    }

    return 0;
}

float weighted_avg(float grade1, float grade2, float grade3, float grade4)
{
    return ((grade1 *2) + (grade2 * 3) + (grade3 * 4) + (grade4)) / (2 + 3 + 4 + 1); 
}

float averege(float avg_wei, float test)
{
    return (avg_wei + test) / 2;
}
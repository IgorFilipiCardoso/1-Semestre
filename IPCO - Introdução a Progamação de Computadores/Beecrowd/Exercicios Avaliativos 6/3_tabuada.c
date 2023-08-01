#include <stdio.h>
 
float avg(float grade1, float grade2, float grade3);

int main() {
 
    int n = 0, i = 0;
    float grade1, grade2, grade3;

    scanf("%d", &n);

    float media[n];

    while (i < n)
    {
        scanf("%f", &grade1);
        scanf("%f", &grade2);
        scanf("%f", &grade3);

        media[i] = avg(grade1, grade2, grade3);

        i++;
    }
    

    i = 0;
    while (i < n)
    {
        printf("%.1f\n", media[i]);

        i++;
    }
 
    return 0;
}

float avg(float grade1, float grade2, float grade3)
{
    return ((grade1 * 2) + (grade2 * 3) + (grade3 * 5)) / (2 + 3 + 5);
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, media;
    int count = 0, count_plus = 0;


    while (count < 6)
    {
        scanf("%f", &a);
        
        if (a > 0)
        {
            count_plus++;
            media += a;
        }

        count++;
    }

    media = media / count_plus;

    printf("%d valores positivos\n", count_plus);
    printf("%.1f\n", media);
    
    return 0;
}

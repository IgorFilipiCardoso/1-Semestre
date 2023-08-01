#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a;
    int count = 0, count_plus = 0;


    while (count < 6)
    {
        scanf("%f", &a);
        
        if (a > 0)
        {
            count_plus++;
        }

        count++;
    }

    printf("%d valores positivos\n", count_plus);
    
    return 0;
}

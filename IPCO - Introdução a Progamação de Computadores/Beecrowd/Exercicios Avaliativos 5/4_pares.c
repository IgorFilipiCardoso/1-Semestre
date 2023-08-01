#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int count = 0, count_plus = 0;


    while (count < 5)
    {
        scanf("%d", &a);
        
        if ((a % 2) == 0)
        {
            count_plus++;
        }

        count++;
    }

    printf("%d valores pares\n", count_plus);
    
    return 0;
}

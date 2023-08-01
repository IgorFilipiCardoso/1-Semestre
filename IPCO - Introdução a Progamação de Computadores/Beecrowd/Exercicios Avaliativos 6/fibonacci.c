#include <stdio.h>
 
int main() {
 
    int n, i = 0;

    scanf("%d", &n);

    int seq[n];

    seq[0] = 0;
    seq[1] = 1;

    if (n == 2)
    {
        for (i = 0; i < 2; i++)
        {
            printf("%d\n", seq[i]);
        }
        
    }
    else if (n == 1)
    {
        for (i = 0; i < 1; i++)
        {
            printf("%d\n", seq[i]);
        }
    }
    else if (n == 0)
    {
        return 0;
    }
    else if (n >= 3)
    {
        printf("0\n1\n");
        for (i = 2; i < n; i++)
        {
            seq[i] = seq[i - 1] + seq[i - 2];
            printf("%d\n", (seq[i]));
        }
    }
    
    printf("\n");
 
    return 0;
}
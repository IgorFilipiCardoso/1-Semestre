#include <stdio.h>



int main()
{
    
    int n, x = 1, y = 1, z = 1;

    scanf("%d", &n);

    while (x != n)
    {

        y += 2;
        z = z + y;

        x++;
    }
        
    printf("%d\n", z);

    return 0;
}

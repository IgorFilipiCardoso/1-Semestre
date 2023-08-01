#include <stdio.h>
 
int main() {
 
    int x, y;

    while (x != y)
    {
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            printf("Decrescente\n");
        }
        else if (y > x)
        {
            printf("Crescente\n");
        }
        else if (y == x)
        {
            return 0;
        }
    }
    return 0;
}
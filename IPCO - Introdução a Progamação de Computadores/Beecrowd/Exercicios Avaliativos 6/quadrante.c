#include <stdio.h>
 
int q1(int x, int y);
int q2(int x, int y);
int q3(int x, int y);
int q4(int x, int y);

int main() {
 
    int x, y;
    int valid = 1;

    while (valid == 1)
    {
        scanf("%d %d", &x, &y);

        if (x != 0 && y != 0)
        {
            if (q1(x, y))
            printf("primeiro\n");
            
            else if (q2(x, y))
            printf("segundo\n");
            
            else if (q3(x, y))
            printf("terceiro\n");
            
            else if (q4(x, y))
            printf("quarto\n");
        }
        else
        {
            valid = 0;
        }
    }
    
 
    return 0;
}

int q1(int x, int y)
{
    return (x > 0 && y > 0);
}
int q2(int x, int y)
{
    return (x < 0 && y > 0);
}
int q3(int x, int y)
{
    return (x < 0 && y < 0);
}
int q4(int x, int y)
{
    return (x > 0 && y < 0);
}
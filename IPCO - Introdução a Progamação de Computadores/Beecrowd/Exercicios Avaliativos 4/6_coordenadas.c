#include <stdio.h>

float origem(float x, float y);
float q1(float x, float y);
float q2(float x, float y);
float q3(float x, float y);
float q4(float x, float y);



int main()
{

    float x, y;

    scanf("%f %f", &x, &y);

    if (origem(x, y)) 
    printf("Origem\n");
    
    else if (q1(x, y))
    printf("Q1\n");
    
    else if (q2(x, y))
    printf("Q2\n");
    
    else if (q3(x, y))
    printf("Q3\n");
    
    else if (q4(x, y))
    printf("Q4\n");
    
    else if (x == 0)
    printf("Eixo Y\n");
    
    else if (y == 0) 
    printf("Eixo X\n"); 
    
    return 0;
}

float origem(float x, float y)
{
    return (x == 0.0 && y == 0.0);
} 
float q1(float x, float y)
{
    return (x > 0 && y > 0);
}
float q2(float x, float y)
{
    return (x < 0 && y > 0);
}
float q3(float x, float y)
{
    return (x < 0 && y < 0);
}
float q4(float x, float y)
{
    return (x > 0 && y < 0);
}
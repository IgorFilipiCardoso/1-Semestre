#include <stdio.h>
 
int main() {

    int i = 0, number, higher = 0, position;
 
    for ( i = 1; i < 101; i++)
    {
        scanf("%d", &number);
        
        
        if (number > higher)
        {
           higher = number;
           position = i;
        }
        
    }

    printf("%d\n", higher);
    printf("%d\n", position);
    
 
    return 0;
}
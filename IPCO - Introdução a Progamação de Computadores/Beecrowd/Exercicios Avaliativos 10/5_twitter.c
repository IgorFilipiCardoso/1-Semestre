#include <stdio.h>
#include <string.h>

int main()
{

    char tweet[143];
        
    tweet[142] = '0';

    fgets(tweet, 143, stdin);

    if (tweet[142] == '0')
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }

    return 0;
}
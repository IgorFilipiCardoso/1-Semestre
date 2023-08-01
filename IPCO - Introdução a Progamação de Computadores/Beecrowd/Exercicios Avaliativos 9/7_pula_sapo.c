#include <stdio.h>
#define TRUE 1
#define FALSE 0

int pipe_validator(int pipe);
int jump_validator(int jump_high);

int main()
{

    int jump_high, pipe;
    int i = 0, win = TRUE;

    scanf("%d %d", &jump_high, &pipe);

    int pipe_high[pipe];

    if (pipe_validator(pipe) && jump_validator(jump_high))
    {
        for (i = 0; i < pipe; i++)
        {
            scanf("%d", &pipe_high[i]);
        }

        for (i = 0; i < pipe; i++)
        {
            if (i != pipe - 1)
            {
                if ((pipe_high[i + 1] - pipe_high[i]) > jump_high || (pipe_high[i] - pipe_high[i + 1]) < (-jump_high))
                {
                    win = FALSE;
                    printf("%d\n", win);
                }
                else
                {
                    win = TRUE;
                    printf("%d\n", win);
                }
            }
        }

        if (win == TRUE)
        {
            printf("YOU WIN\n");
        }
        else
        {
            printf("GAME OVER\n");
        }

    }

    return 0;
}

int pipe_validator(int pipe)
{
    if (pipe >= 2 && pipe <= 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }    
}
int jump_validator(int jump_high)
{
    if (jump_high >= 1 && jump_high <= 5)
    {
       return TRUE;
    }
    else
    {
        return FALSE;
    }    
    
}
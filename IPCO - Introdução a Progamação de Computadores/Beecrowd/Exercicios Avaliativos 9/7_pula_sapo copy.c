#include <stdio.h>
#define TRUE 1
#define FALSE 0

int pipe_validator(int pipe);
int jump_validator(int jump_high);
int dif(int pipe_high, int pipe_high_next);

int main()
{

    int jump_high, pipe;
    int i = 0, win = FALSE;

    scanf("%d %d", &jump_high, &pipe);

    int pipe_high[pipe];

    if (pipe_validator(pipe) && jump_validator(jump_high))
    {
        for (i = 0; i < pipe; i++)
        {
            scanf("%d", &pipe_high[i]);
        }

        for (i = 1; i < pipe; i++)
        {
                if (dif(pipe_high[i], pipe_high[i - 1]) <= jump_high)
                {
                    win++;
                }
        }

        if (win == pipe - 1)
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

int dif(int pipe_high, int pipe_high_previus)
{
    if (pipe_high_previus < pipe_high)
    {
        return pipe_high - pipe_high_previus;
    }
    else
    {
        return pipe_high_previus - pipe_high;
    }
    
    
}
#include <stdio.h>

int nivel(int velocidade);

int main()
{

    int n = 1, i;
    int velocidade[500], nivel_maior;
    int grupo = 1, lesma;
    velocidade[0] = 1;

while (n != 0)
{
    //printf("Digite um valor entre 1 e 500 representando as lesmas do grupo, para encerrar digite 0: ");
    scanf("%d", &n);
    if (n == 0)
    {printf("Progama encerrado!\n");}
    else if (n > 500 || n < 1)
    {printf("Fora do intervalo!\n");}

    else
    {
        lesma = 1;
        nivel_maior = 1;
        i = 1;

        while (i < n + 1)
        {

            //printf("\nDigite a velocidade: ");
            scanf("%d", &velocidade[i]);

            if (velocidade[i] > 50 || velocidade[i] < 1)
            {printf("Fora do intervalo!\n");}

            else
            {

                if (nivel(velocidade[i]) > nivel(velocidade[i - 1]))
                {
                    nivel_maior = nivel(velocidade[i]);
                    lesma = i;
                }
                
                i++;
            }
            
        }

        printf("\nGrupo[%d] = Nivel %d, lesma numero %d\n\n", grupo, nivel_maior, lesma);
        grupo++;
    }
}
        
    return 0;
}

int nivel(int velocidade)
{

    if (velocidade < 10)
    {
        return 1;
    }
    else if (velocidade >= 10 && velocidade < 20)
    {
        return 2;
    }
    else if (velocidade > 20)
    {
        return 3;
    }
    return 1;
}

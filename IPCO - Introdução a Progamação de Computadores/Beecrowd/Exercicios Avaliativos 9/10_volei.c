#include <stdio.h>

int main()
{

    int players, i;
    char nome[25];
    float service = 0, blocks = 0, attack = 0;
    float service_succ = 0, blocks_succ = 0, attack_succ = 0;

    scanf("%d", &players);

    float statistics[players * 3];
    float statistics_succ[players * 3];

    for (i = 0; i < players; i++)
    {
        scanf("%s", nome);
        scanf("%f %f %f", &statistics[i], &statistics[i+1], &statistics[i+2]);

        service += statistics[i];
        blocks += statistics[i+1];
        attack += statistics[i+2];

       scanf("%f %f %f", &statistics_succ[i], &statistics_succ[i+1], &statistics_succ[i+2]);

        service_succ += statistics_succ[i];
        blocks_succ += statistics_succ[i+1];
        attack_succ += statistics_succ[i+2];
    }

    service_succ = (service_succ / service) * 100;
    blocks_succ = (blocks_succ / blocks) * 100;
    attack_succ = (attack_succ / attack) * 100;

    printf("Pontos de Saque: %.2f %%.\n", service_succ);
    printf("Pontos de Bloqueio: %.2f %%.\n", blocks_succ);
    printf("Pontos de Ataque: %.2f %%.\n", attack_succ);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define NROVAGAS 3

struct estacionamento
{
    int vetor[NROVAGAS];
    int qtdade;
};

struct estacionamento criaEstacionamento()
{
    struct estacionamento variavel;
    variavel.qtdade = -1;
    return variavel;
}

int estaCheio(struct estacionamento variavel)
{
    return variavel.qtdade == (NROVAGAS - 1) ? 1 : 0;
}

void mostraEstacionamento(struct estacionamento garagem)
{
    int i;
    printf("\nCarros estacionados: ");
    if (!(garagem.qtdade < 0))
    {
        for (i = 0; i < garagem.qtdade; i++)
        {
            printf("%d - ", garagem.vetor[i]);
        }
        printf("%d", garagem.vetor[i]);
    }
}

struct estacionamento saiCarro(struct estacionamento garagem)
{
    int i, placa_sai;

    if (garagem.qtdade < 0)
    {
        printf("ESTACIONAMENTO VAZIO!");
        mostraEstacionamento(garagem);
    }
    else
    {
        garagem.qtdade--;

        placa_sai = garagem.vetor[0];
        for (i = 0; i < garagem.qtdade + 1; i++)
        {
            garagem.vetor[i] = garagem.vetor[i + 1];
        }

        printf("\nSAIU: %d", placa_sai);
        mostraEstacionamento(garagem);
    }

    return garagem;
}

struct estacionamento entraCarro(struct estacionamento garagem, int placa)
{
    if (estaCheio(garagem))
    {
        printf("\nESTACIONAMENTO CHEIO!");
    }
    else
    {
        garagem.qtdade += 1;
        garagem.vetor[garagem.qtdade] = placa;
        printf("\nENTROU: %d", placa);
        mostraEstacionamento(garagem);
    }

    return garagem;
}

int main()
{
    struct estacionamento garagem;

    garagem = criaEstacionamento();

    printf("%d\n\n", garagem.qtdade);
    garagem = saiCarro(garagem);

    garagem = entraCarro(garagem, 1234);
    garagem = entraCarro(garagem, 2345);
    garagem = entraCarro(garagem, 3456);
    garagem = entraCarro(garagem, 4567);
    garagem = saiCarro(garagem);
    garagem = entraCarro(garagem, 9876);
    garagem = entraCarro(garagem, 8765);
    garagem = saiCarro(garagem);
    garagem = saiCarro(garagem);

    return 0;
}
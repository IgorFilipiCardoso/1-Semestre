/*
No oitavo episodio da segunda temporada do seriado The Big Bang Theory, The Lizard-Spock Expansion, Sheldon e Raj discutem qual dos dois é o melhor: o filme Saturn 3 ou a série Deep Space 9. A sugestão de Raj para a resolução do impasse é uma disputa de Pedra-Papel-Tesoura. Contudo, Sheldon argumenta que, se as partes envolvidas se conhecem, entre 75% e 80% das disputas de Pedra-Papel-Tesoura terminam empatadas, e então sugere o Pedra-Papel-Tesoura-Lagarto-Spock.

As regras do jogo proposto são:

a tesoura corta o papel;
o papel embrulha a pedra;
a pedra esmaga o lagarto;
o lagarto envenena Spock;
Spock destrói a tesoura;
a tesoura decapita o lagarto;
o lagarto come o papel;
o papel contesta Spock;
Spock vaporiza a pedra;
a pedra quebra a tesoura.
Embora a situação não se resolva no episódio (ambos escolhem Spock, resultando em um empate), não é difıcil deduzir o que aconteceria se a disputa continuasse. Caso Sheldon vencesse, ele se deleitaria com a vitória, exclamando "Bazinga!"; caso Raj vencesse, ele concluiria que "Raj trapaceou!"; caso o resultado fosse empate, ele exigiria nova partida: "De novo!". Conhecidas as personagens do jogo escolhido por ambos, faça um programa que imprima a provável reação de Sheldon.

Entrada
A entrada consiste em uma série de casos de teste. A primeira linha contém um inteiro positivo T (T ≤ 100), que representa o número de casos de teste. Cada caso de teste é representado por uma linha da entrada, contendo as escolhas de Sheldon e Raj, respectivamente, separadas por um espaço em branco. As escolha possíveis são as personagens do jogo: pedra, papel, tesoura, lagarto e Spock.

Saida
Para cada caso de teste deverá ser impressa a mensagem "Caso #t: R", onde t é o número do caso de teste (cuja contagem se inicia no número um) e R é uma das três reações possíveis de Sheldon: "Bazinga!", "Raj trapaceou!", ou "De novo!".
*/

#include <stdio.h>
#include <string.h>

void pptls(char sheldon[10], char raj[10], int casos);

int main()
{

    int cases, i;
    char sheldon[10];
    char raj[10];

    scanf("%d", &cases);

    for (i = 0; i < cases; i++)
    {
        scanf("%s %s", sheldon, raj);

        pptls(sheldon, raj, i);
    }

    return 0;
}

void pptls(char sheldon[10], char raj[10], int casos)
{

    if (strcmp(sheldon, raj) == 0)
    {
        printf("Caso #%d: De novo!\n", casos + 1);
    }
    else
    {
        if (strcmp(sheldon, raj) == 0)
        {
            printf("Caso #%d: De novo!\n", casos + 1);
        }
        else if (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "pedra") == 0)
        {
            printf("Caso #%d: Bazinga!\n", casos + 1);
        }
        else if (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "Spock") == 0)
        {
            printf("Caso #%d: Bazinga!\n", casos + 1);
        }
        else if (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "lagarto") == 0)
        {
            printf("Caso #%d: Bazinga!\n", casos + 1);
        }
        else if (strcmp(sheldon, "papel") == 00 && strcmp(raj, "Spock") == 0)
        {
            printf("Caso #%d: Bazinga!\n", casos + 1);
        }
        else if (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "papel") == 0)
        {
            printf("Caso #%d: Bazinga!\n", casos + 1);
        }
        else if (strcmp(sheldon, "papel") == 0 && strcmp(raj, "pedra") == 0)
        {
            printf("Caso #%d: Bazinga!\n", casos + 1);
        }
        else if (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "papel") == 0)
        {
            printf("Caso #%d: Bazinga!\n", casos + 1);
        }
        else if (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "lagarto") == 0)
        {
            printf("Caso #%d: Bazinga!\n", casos + 1);
        }
        else if (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "tesoura") == 0)
        {
            printf("Caso #%d: Bazinga!\n", casos + 1);
        }
        else if (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "tesoura") == 0)
        {
            printf("Caso #%d: Bazinga!\n", casos + 1);
        }
        else
        {
            printf("Caso #%d: Raj trapaceou!\n", casos + 1);
        }
    }
}
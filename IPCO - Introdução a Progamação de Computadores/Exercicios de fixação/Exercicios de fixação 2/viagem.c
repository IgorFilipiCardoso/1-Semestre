/*Alan e Cristiano irão viajar para no fim de semana. Sabe-se que seu automóvel faz em média 12 quilômetros por litro de
combustível. Eles desejam saber quantos litros de combustível gastarão na viagem.
Para realizar o cálculo, o usuário deverá fornecer o TEMPO gasto na viagem e a VELOCIDADE MÉDIA durante a
viagem.
O programa deve apresentar como resultado:
A velocidade média;
Tempo gasto na viagem;
Distância percorrida;
Quantidade de litros consumidos.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int tempo, velocidade_media, distancia, litros_consumidos, km_litro;

    km_litro = 12;

    printf("\n\nDigite o tempo que ira gastar na viagem, em horas: ");
    scanf("%d", &tempo);

    printf("\nDigite a velocidade média: ");
    scanf("%d", &velocidade_media);

    distancia = velocidade_media * tempo;

    litros_consumidos = distancia / km_litro;

    printf("\n\n- A velocidade média foi de %dkm/h.", velocidade_media);
    printf("\n\n- O tempo gasto na viagem foi %d horas.", tempo);
    printf("\n\n- A distância percorrida foi de %dkm.", distancia);
    printf("\n\n- A quantidade de cumbustível consumidos foram %d litros.\n\n", litros_consumidos);

    return 0;
}

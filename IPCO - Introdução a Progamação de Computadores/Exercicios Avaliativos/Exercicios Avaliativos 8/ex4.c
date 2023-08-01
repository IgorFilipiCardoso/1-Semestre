/*
4. Implemente uma função recursiva que verifica se um número, denominado chave, existe ou não no vetor. A função retorna a posição do vetor  se a chave existir e -1 se a chave não existe no vetor. Os argumentos da função são: um vetor de inteiros, o tamanho do vetor e o valor da chave. Para testar a  função,  implemente  um  programa  que  gere  um  vetor  de  1.000.000 de  posições com  valores aleatórios e verifique, usando a função, se a chave gerada na posição zero do vetor se repete no vetor. Caso a chave exista deve-se imprimir qual a posição, caso contrário uma mensagem informando que a chave não foi encontrada.
*/

#include <stdio.h>
#include <time.h>

//Eu só consegui fazer rodar até 100.000. Com 1 milhão eu não consegui rodar. 
#define TAMANHO 1000000

int key_verify(int array[], int tamanho, int key);

int main()
{

    int arranjo[TAMANHO];
    int chave, i;

    srand( (unsigned) time(NULL) );
    
        for (i = 0; i < TAMANHO; i++)
        {
            arranjo[i] = rand();
        }
        
        chave = key_verify(arranjo, TAMANHO ,arranjo[0]);

        if (chave == -1 || chave == 0)
        {
            printf("\nChave nao encontrada\n");
        }
        else
        {
            printf("\nA chave exite e esta na posicao %d\n", chave);
        }
    
    return 0;
    
}

int key_verify(int array[], int tamanho, int key)
{

    if (array[tamanho] == key)
    {
        return tamanho;
    }
    else
    {
        return key_verify(array, (tamanho - 1), key);
    }

    return -1;
    
}

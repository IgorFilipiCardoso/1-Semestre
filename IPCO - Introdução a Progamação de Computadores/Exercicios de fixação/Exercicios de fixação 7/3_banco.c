/*
3. Uma instituição bancária armazena os dados de todas as movimentações bancárias de seus clientes. Sabe-se que são armazenados os seguintes dados: • CLIENTE (nro_conta, cpf, nome, saldo) • MOVIMENTACAO(id, nro_conta, tipo[crédito/débito], valor) O sistema deve apresentar ao cliente seu extrato e atualizar o saldo do cliente sempre que houver alguma movimentação.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define SIZE 50

struct type_client
{
    int nro_conta;
    int cpf;
    char nome[40];
    double saldo;
};

struct type_movimentacao
{
    int id;
    char compra[25];
    int nro_conta;
    char tipo[8];
    double valor;
};

void add_cliente(struct type_client cliente[], int count);
void add_movimentacao(struct type_client cliente[], struct type_movimentacao movimentacao[], int count, int id);
void show_account(struct type_client cliente[], struct type_movimentacao movimentacao[], int count, int id, int type);

int main()
{

    struct type_client cliente[SIZE];
    struct type_movimentacao movimentacao[SIZE * 2];
    int stop = FALSE, option, count = 0, id = 0;

    srand((unsigned)time(NULL));

    while (!stop)
    {
        printf("\n-------------------------------\n");
        printf("\n[1] -> Cadastrar cliente\n");
        printf("[2] -> Adicionar movimentacao\n");
        printf("[3] -> Extrato\n");
        printf("[0] -> Sair\n");

        printf("R: ");
        scanf("%d", &option);
        system("cls");

        switch (option)
        {
        case 0:
            printf("Voce escolheu sair...\n\n");
            stop = TRUE;
            break;
        case 1:
            add_cliente(cliente, count);
            count++;
            break;
        case 2:
            add_movimentacao(cliente, movimentacao, count, id);
            id++;
            break;
        case 3:
            show_account(cliente, movimentacao, count, id, 0);
            break;
        }
    }

    return 0;
}

void add_cliente(struct type_client cliente[], int count)
{

    cliente[count].nro_conta = 2;
    int i, stop;

    while (cliente[count].nro_conta < 10000)
    {

        cliente[count].nro_conta = rand() % 100000;

        stop = FALSE;
        i = 0;
        while (i < count && !stop)
        {
            if (cliente[count].nro_conta == cliente[i].nro_conta)
            {
                cliente[count].nro_conta = 0;
                stop = TRUE;
            }
            i++;
        }
    }

    printf("\nDigite nome: ");
    scanf("%s", cliente[count].nome);

    printf("\nDigite CPF: ");
    scanf("%d", &cliente[count].cpf);

    printf("\nDigite o saldo inicial: ");
    scanf("%lf", &cliente[count].saldo);

    printf("\nO numero da conta e %d.\n", cliente[count].nro_conta);
}
void add_movimentacao(struct type_client cliente[], struct type_movimentacao movimentacao[], int count, int id)
{
    int conta, i, stop;

    movimentacao[id].id = id;

    printf("\nDigite a conta: ");
    scanf("%d", &conta);

    i = 0;
    stop = FALSE;
    while (i < count && !stop)
    {
        if (conta == cliente[i].nro_conta)
        {
            movimentacao[id].nro_conta = conta;

            stop = TRUE;

            printf("\nDigite o que foi comprado: ");
            scanf("%s", movimentacao[id].compra);

            printf("\nDigite o tipo da compra(Credito/Debito): ");
            scanf("%s", movimentacao[id].tipo);

            printf("\nDigite o valor da compra: ");
            scanf("%lf", &movimentacao[id].valor);

            cliente[i].saldo -= movimentacao[id].valor;

            show_account(cliente, movimentacao, i, id, 1);
        }

        i++;
    }

    if (!stop)
    {
        printf("Conta nao encontrada!");
    }
}
void show_account(struct type_client cliente[], struct type_movimentacao movimentacao[], int count, int id, int type)
{
    int i, contador = 1, j, conta;

    if (type == 1)
    {
        printf("\n------------Extrato------------\n");
        printf("Saldo atual: R$%.2lf", cliente[count].saldo);

        for (i = 0; i <= id; i++)
        {
            if (movimentacao[i].nro_conta == cliente[count].nro_conta)
            {
                printf("\n\nCompra[%d]:", contador++);
                printf("\nCompra de: %s", movimentacao[i].compra);
                printf("\nValor da compra: R$%.2lf", movimentacao[i].valor);
                printf("\nTipo da compra: %s", movimentacao[i].tipo);
            }
        }
    }
    else
    {

        printf("Digite o numero da conta: ");
        scanf("%d", &conta);

        i = 0;
        while (i < count)
        {
            if (conta == cliente[i].nro_conta)
            {
                printf("\n------------Extrato------------\n");
                printf("Saldo atual: R$%.2lf", cliente[i].saldo);

                for (j = 0; j <= id; j++)
                {
                    if (movimentacao[j].nro_conta == cliente[i].nro_conta)
                    {
                        printf("\n\nCompra[%d]:", contador++);
                        printf("\nCompra de: %s", movimentacao[j].compra);
                        printf("\nValor da compra: R$%.2lf", movimentacao[j].valor);
                        printf("\nTipo da compra: %s", movimentacao[j].tipo);
                    }
                }
            }
            i++;
        }
        

        for (i = 0; i <= id; i++)
        {
            if (movimentacao[i].nro_conta == cliente[count].nro_conta)
            {
                printf("\n\nCompra[%d]:", contador++);
                printf("\nCompra de: %s", movimentacao[i].compra);
                printf("\nValor da compra: R$%.2lf", movimentacao[i].valor);
                printf("\nTipo da compra: %s", movimentacao[i].tipo);
            }
        }
    }
}
/*
2. Implemente um sistema para a portaria do IFSP Câmpus Araraquara. O sistema deve armazenar marca, modelo, cor, placas de um carro e também nome e prontuário do aluno motorista. O sistema deve permitir dois tipos de busca: busca pela placa do carro e busca pelo prontuário do aluno.
*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

// Define o tanto de motoristas que podem ser armazenados.
#define SIZE 50

// Estrutura para definir o motorista e seus dados.
struct type_driver
{
    char car_brand[15];
    char car_model[15];
    char car_color[10];
    int car_plate;
    char student_name[40];
    int student_record;
};

// Função para registrar o motorista e seus dados.
void register_driver(struct type_driver driver[], int count);

// Função para buscar o motorista pela placa.
void plate_search(struct type_driver driver[], int count);

// Função para buscar o motorista pelo prontuario do aluno.
void record_search(struct type_driver driver[], int count);

// Função que mostra as informações de UM motorista.
void show_informations(struct type_driver driver[], int count);

// Função para mostrar todos motoristas cadastrados.
void show_all(struct type_driver driver[], int count);

int main()
{

    int stop = FALSE;
    int option, count = 0;
    struct type_driver driver[SIZE];

    while (!stop)
    {
        printf("-------------------------------\n");
        printf("\n[1] -> Cadastrar motorista\n");
        printf("[2] -> Busca por placa\n");
        printf("[3] -> Busca por prontuario\n");
        printf("[4] -> Mostrar todos\n");
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
            register_driver(driver, count);
            count++;
            break;
        case 2:
            plate_search(driver, count);
            break;
        case 3:
            record_search(driver, count);
            break;
        case 4:
            show_all(driver, count);
            break;
        }
    }

    return 0;
}

void register_driver(struct type_driver driver[], int count)
{
    // Usuario vai digitar o nome do motorista aluno.
    printf("\nDigite o nome do aluno: ");
    scanf("%s", driver[count].student_name);

    // Usuario vai digitar o prontuario do motorista aluno.
    printf("\nDigite o prontuario do aluno: ");
    scanf("%d", &driver[count].student_record);

    // Armazenar a placa do carro.
    printf("\nDigite a placa do carro: ");
    scanf("%d", &driver[count].car_plate);

    // Armazenar a marca do carro.
    printf("\nDigite a marca do carro: ");
    scanf("%s", driver[count].car_brand);

    // Armazenar a modelo do carro.
    printf("\nDigite o modelo do carro: ");
    scanf("%s", driver[count].car_model);

    // Armazenar a cor do carro.
    printf("\nDigite a cor do carro: ");
    scanf("%s", driver[count].car_color);

    printf("\nCadastrado com sucesso!!\n\n");
}
void plate_search(struct type_driver driver[], int count)
{
    int plate;
    int index = 0;
    int stop = FALSE;

    printf("\nDigite a placa a busar: ");
    scanf("%d", &plate);

    // Vai procurar no vetor se alguma placa corresponde a placa que foi solicitada;
    while (index < count && !stop)
    {
        if (plate == driver[index].car_plate)
        {
            // Se encontrar, mostra e logo depois a repetição para, pois stop deixa de ser False.
            printf("-------------------------------");
            show_informations(driver, index);
            stop = TRUE;
        }

        index++;
    }

    // Verifica se stop ainda é false, pois se for, significa que não foi encontrado o mostorista
    if (stop == FALSE)
    {
        printf("\nMotorista nao encontrado!!\n");
    }
}
void record_search(struct type_driver driver[], int count)
{
    int student_record;
    int index = 0;
    int stop = FALSE;

    // Procura no vetor se algum prontuario corresponde p prontuario que foi solicitado;
    printf("\nDigite o prontuario a busar: ");
    scanf("%d", &student_record);

    while (index < count && !stop)
    {
        if (student_record == driver[index].student_record)
        {
            // Se encontrar, mostra e logo depois a repetição para, pois stop deixa de ser False.
            printf("-------------------------------");
            show_informations(driver, index);
            stop = TRUE;
        }

        index++;
    }

    // Verifica se stop ainda é false, pois se for, significa que não foi encontrado o mostorista
    if (stop == FALSE)
    {
        printf("\nMotorista nao encontrado!!\n");
    }
}
void show_informations(struct type_driver driver[], int count)
{

    printf("\n\nNome: %s\n", driver[count].student_name);
    printf("Prontuario: %d\n", driver[count].student_record);
    printf("Placa do carro: %d\n", driver[count].car_plate);
    printf("Marca do carro: %s\n", driver[count].car_brand);
    printf("Modelo do carro: %s\n", driver[count].car_model);
    printf("Cor do carro: %s\n\n", driver[count].car_color);
}

void show_all(struct type_driver driver[], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("\n\n--------------[%d]-------------", i + 1);
        show_informations(driver, i);
    }
}

#include <stdio.h>

void calc(int hora_1, int hora_2, int segundo_1, int segundo_2, int minuto_1, int minuto_2, int dia_1, int dia_2);
int dia_calc(int dia_1, int dia_2, int hora_1, int hora_2);

int main()
{
    
    int dia_1, hora_1, minuto_1, segundo_1;
    int dia_2, hora_2, minuto_2, segundo_2;
    char c_void;

    scanf("%s %d", &c_void, &dia_1 );
    scanf("%d %c %d %c %d", &hora_1, &c_void, &minuto_1, &c_void, &segundo_1);

    scanf("%s %d", &c_void, &dia_2 );
    scanf("%d %c %d %c %d", &hora_2, &c_void, &minuto_2, &c_void, &segundo_2);

    calc(hora_1, hora_2, segundo_1, segundo_2, minuto_1, minuto_2, dia_1, dia_2);

    return 0;
}

void calc(int hora_1, int hora_2, int segundo_1, int segundo_2, int minuto_1, int minuto_2, int dia_1, int dia_2)
{
    int hora = 0, dia = 0 , segundo = 0, minuto = 0;

    segundo = segundo_2 - segundo_1;
    minuto = minuto_2 - minuto_1;
    hora = hora_2 - hora_1;
    dia = dia_2 - dia_1;
    
    if (segundo < 0){
    segundo += 60;
    minuto--;
    }

    if (minuto < 0){
    minuto += 60;
    hora--;
    }

    if (hora < 0){
    hora += 24;
    dia--;
    }
    

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", minuto);
    printf("%d segundos(s)\n", segundo);
    
}

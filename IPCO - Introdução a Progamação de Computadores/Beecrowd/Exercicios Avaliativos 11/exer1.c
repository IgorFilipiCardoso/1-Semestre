#include <stdio.h>
#define TRUE 1
#define FALSE 0

int resultado(int num, int salto);

int main() {

    int casos, i, num, salto;

    scanf("%d", &casos);
    
    for (i = 1; i < casos + 1; i++)
    {
        scanf("%d", &num);
        scanf("%d", &salto);
        printf("Case %d: %d\n", i, resultado(num, salto) + 1);
    }

    return 0;
}

int resultado(int num, int salto){

    if(num == 1){
        return 0;
    }

    return (resultado(num - 1, salto) + salto) % num;
}
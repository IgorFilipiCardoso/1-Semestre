#include <stdio.h>
#define TRUE 1
#define FALSE 0

int estrategia(char tabuleiro[], int N);

int main(){
    int N;

    scanf("%d", &N);

    while (N >= 1 && N != 0) {
        char tabuleiro[10001];
        scanf("%s", tabuleiro);
        
        if (estrategia(tabuleiro, N)) {
            printf("S\n");
        } else {
            printf("N\n");
        }

        scanf("%d", &N);
    }
    return 0;
}
    
int estrategia(char tabuleiro[], int N){

    int i;
    for (i = 0; i < N - 2; i++) {
        if (tabuleiro[i] == '.' && tabuleiro[i + 1] == '.' && tabuleiro[i + 2] == '.') {
            return TRUE;
        }
        else if (tabuleiro[i] == 'X' && tabuleiro[i + 1] == '.' && tabuleiro[i + 2] == 'X' && tabuleiro[i + 3] == '.' && tabuleiro[i + 4] == 'X')
        {
            return TRUE;
        }
    }
    return FALSE;

}
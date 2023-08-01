#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert_to_morse(int number) {

    int i = 0;
    int digit_count = 0;
    int temp = number;
    char digits[digit_count + 1];

    char *morse_code[] = {
        "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."
    };

    if (number < 0 || number > 9999) {
        printf("Número fora do intervalo válido.\n");
        return;
    }

    while (temp > 0) {
        temp = temp / 10;
        digit_count++;
    }

    sprintf(digits, "%d", number);
   
    while (i < digit_count) {

        int digit = digits[i] - '0';
        if (digit >= 0 && digit <= 9) {
            printf("%s ", morse_code[digit]);
        }

        i++;
    }
    
    printf("\n");
}

int main() {
    int number;
    printf("Digite um número inteiro entre 0 e 9999: ");
    scanf("%d", &number);

    convert_to_morse(number);

    return 0;
}

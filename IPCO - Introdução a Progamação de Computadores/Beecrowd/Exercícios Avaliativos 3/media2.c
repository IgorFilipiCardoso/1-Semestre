#include <stdio.h>
 
double media();
double valor();
double media1();
double media2();
double media3();


int main() {
 
    printf("MEDIA = %.1lf\n", media());
 
    return 0;
}

double valor(){
    double valor;
    scanf("%lf", &valor);
    return valor;
}

double media(){
    return (media1() + media2() + media3()) / 10;
}

double media1(){
    return (valor()*2);
}

double media2(){
    return (valor()*3);
}

double media3(){
    return (valor()*5);
}


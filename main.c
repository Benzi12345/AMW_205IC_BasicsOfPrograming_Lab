#include <stdio.h>


int main() {
    printf("Witaj w kalkulatorze prostym!\n");

    double a;
    double b;
    char z;

    printf("Podaj pierwsza liczbe: \n");
    scanf("%lf", &a);
    printf("Jakie dzialanie chcesz wykonac: \n");
    scanf(" %c", &z);
    printf("Podaj druga liczbe: \n");
    scanf("%lf", &b);

    if(z == '+'){
        printf("%f", a + b);
    } else if(z == '-'){
        printf("%f", a - b);
    }else if(z == '/'){
        printf("%f", a / b);
    }else if(z == '*') {
        printf("%f", a * b);
    } else {
        printf("Zly operator");
    }
    return 0;
}

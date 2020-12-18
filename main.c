#include <stdio.h>


int main() {
    printf("Witaj w kalkulatorze prostym!\n");

    double a;
    double b;
    char z;


    scanf("%lf", &a);

    scanf(" %c", &z);

    scanf("%lf", &b);

    if(z == '+'){
        printf("%f", a+b);
    } else if(z == '-'){
        printf("%f", a-b);
    }else if(z == '/'){
        printf("%f", a/b);
    }else if(z == '*') {
        printf("%f", a*b);
    } else {
        printf("Zly operator");
    }
    return 0;
}

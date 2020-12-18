#include <stdio.h>

int main() {
    float liczba1,liczba2,suma;
    char operacja;

    scanf("%f",&liczba1);
    scanf(" %c",&operacja);
    scanf("%f",&liczba2);
    switch (operacja)
    {
        case '+':
            suma=liczba1+liczba2;
            break;

        case '-':
            suma=liczba1-liczba2;
            break;

        case '*':
            suma=liczba1*liczba2;
            break;

        case '/':
            suma=liczba1/liczba2;
            break;

        default:
            printf("Wybrana zla operacja");
    }
    printf("Wynik: %f",suma);
    return 0;
}

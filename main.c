#include <stdio.h>

int main() {
    float liczba1,liczba2,suma;
    char operacja;
    printf("Prosze podaj pierwsza liczbe:");
    scanf("%f",&liczba1);
    printf("Prosze podaj druga liczbe:");
    scanf("%f",&liczba2);
    printf("Prosze podaj operacje:");
    scanf(" %c",&operacja);
    switch (operacja)
    {
        case '+':
            suma=liczba1+liczba2;
            printf("Wynik: %f",suma);
            break;

        case '-':
            suma=liczba1-liczba2;
            printf("Wynik: %f",suma);
            break;

        case '*':
            suma=liczba1*liczba2;
            printf("Wynik: %f",suma);
            break;

        case '/':
            suma=liczba1/liczba2;
            printf("Wynik: %f",suma);
            break;

        default:
            printf("Wybrana zla operacja");
    }
    return 0;
}

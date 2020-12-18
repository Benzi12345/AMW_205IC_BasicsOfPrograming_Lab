#include <stdio.h>


int main() {
    float wynik = 0, x, y;
    char z;
    printf("Podaj pierwsza liczbe\n");
    scanf(" %f", &x);
    printf("Podaj druga liczbe\n");
    scanf(" %f", &y);
    printf("Podaj operacje +,-,*,/\n");
    scanf(" %c", &z);
    switch (z) {
        case '+':
            wynik = x + y;
            break;
        case '-':
            wynik = x - y;
            break;
        case '*':
            wynik = x * y;
            break;
        case '/':
            if (y != 0)
                wynik = x / y;
            else {
                printf("Nie mozna dzielic przez zero");
                return 0;
            }
    }

            printf("Wynik = %f \n", wynik);
            return 0;

    }

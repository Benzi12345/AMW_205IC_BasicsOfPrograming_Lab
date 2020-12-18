#include <stdio.h>


int main() {
    float wynik = 0, x, y;
    char z;
    printf("Dzialanie:\n");
    scanf(" %f%c%f", &x,&z,&y);

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

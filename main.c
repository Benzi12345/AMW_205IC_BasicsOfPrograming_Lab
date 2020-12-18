#include <stdio.h>
#include <ctype.h>

int main() {
    float wynik = 0, l1 = 0, l2 = 0;
    char opr;
    printf("Podaj pierwsza liczbe\n");
    scanf(" %f", &l1);
    printf("Podaj druga liczbe\n");
    scanf(" %f", &l2);
    printf("Podaj operacje +,-,*,/\n");
    scanf(" %c", &opr);
    switch (opr) {
        case '+':
            wynik = l1 + l2;
            break;
        case '-':
            wynik = l1 - l2;
            break;
        case '*':
            wynik = l1 * l2;
            break;
        case '/':
            if (l2 != 0)
                wynik = l1 / l2;
            else {
                printf("Nie dziel przez zero");
                return 0;
            }
            break;
        default:
            printf("Zly znak");
            return 0;
    }
    printf("Wynik = %f \n", wynik);
    return 0;
}
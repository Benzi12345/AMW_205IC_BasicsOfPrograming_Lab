#include <stdio.h>
int main() {
    char operator;
    int pie, dru;
    printf("Wpisz operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Wpisz dwie liczby: ");
    scanf("%i %i", &pie, &dru);

    switch (operator) {
        case '+':
            printf("%.1i + %.1i= %.1i", pie, dru, pie + dru);
            break;
        case '-':
            printf("%.1i - %.1i = %.1i", pie, dru, pie - dru);
            break;
        case '*':
            printf("%.1i * %.1i = %.1i", pie, dru, pie * dru);
            break;
        case '/':
            printf("%.1i / %.1i = %.1i", pie, dru, pie / dru);
            break;
        default:
            printf("Blad, operator znajduje sie w zlym miejscu");
    }

    return 0;
}
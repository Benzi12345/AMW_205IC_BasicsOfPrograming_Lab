#include <stdio.h>

int main() {
    float a,b,score ; //uzyłem flota gdyż wolałem by wyniki wychodziły po przecinku
    char sign;
    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe: ");
    scanf_s("%f",&b);
    printf("Podaj dzialanie(+,-,*,/): ");
    scanf_s(" %c",&sign);

    switch (sign) {
        case '+':
           score = a+b;
            printf("Wynik dodawania to: %f",score);
            break;
        case '-':
            score = a-b;
            printf("Wynik odejnowania to: %f",score);
            break;
        case '*':
            score = a*b;
            printf("Wynik mnozenia to: %f",score);
            break;
        case '/':
                score = a/b;
                printf("Wynik dzielenia to: %f",score);
            break;
        default:
            printf("Error! zly znak");
    }
    return 0;
}

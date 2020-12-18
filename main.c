#include <stdio.h>

int main() {
    float a,b,score ; //uzyłem flota gdyż wolałem by wyniki wychodziły po przecinku
    char sign;
    printf("Podaj rowanie: ");
    scanf("%f%c%f",&a,&sign,&b);

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
            if (b==0)
            {
                printf("Error! Nie mozna dzielic przez 0");
            }
            else{
                score = a/b;
                printf("Wynik dzielenia to: %f",score);
            }
            break;
        default:
            printf("Error! zly znak");
    }
    return 0;
}

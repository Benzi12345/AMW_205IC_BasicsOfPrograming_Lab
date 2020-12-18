#include <stdio.h>

int main(){

    printf("Kalkulator prosty \n");
    float x, y;
    float wynik;
    char znak;

    printf("Wpisz pierwsza liczbe: ");
    scanf("%f", &x);

    printf("Wpisz druga liczbe: ");
    scanf("%f", &y);

    printf("Podaj znak operacji: ");
    scanf(" %c", &znak);

    if(znak == '+')
    {
        wynik = x + y;
        printf("Wynik dzialania to: %f", wynik);
    }

    if(znak == '-')
    {
        wynik = x - y;
        printf("Wynik dzialania to: %f", wynik);
    }

    if(znak == '*')
    {
        wynik = x * y;
        printf("Wynik dzialania to: %f", wynik);
    }

    if(znak == '/')
    {
        wynik = x / y;
        printf("Wynik dzialania to: %f", wynik);
    }

    return 0;
}
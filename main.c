#include <stdio.h>

int main(){

    printf("Kalkulator prosty \n");
    float x, y;
    float wynik;
    char znak;


    scanf("%f", &x);
    scanf(" %c", &znak);
    scanf("%f", &y);



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
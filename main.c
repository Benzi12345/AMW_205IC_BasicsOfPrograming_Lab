#include <stdio.h>

int main() {

    printf("Prosty kalkulator,wpisz pierw  liczbe , znak dzialania (+,-,* lub /) potem druga liczbe  \n" );
    int a,b;
    float wynik;
    char znak;
    scanf("%i",&a);
    scanf("%i",&b);

    scanf(" %c",&znak);
    if(znak == '+') {
        wynik = a + b;
        printf("Wynik dodawania wynosi %f", wynik);


    }
    else if(znak == '-')
    {
        wynik=a-b;
        printf("Wynik odejmowania wynosi %f",wynik );


    }
    else if(znak == '*')
    {
        wynik=a*b;
        printf("Wynik mnozenia wynosi %f",wynik );


    }
    else if(znak == '/' && a != 0 && b != 0)
    {
        wynik=a/b;
        printf("Wynik dzielenia wynosi %f",wynik );


    }
    else if(znak == '/' && a == 0 || b == 0)
    {
        printf("Nie dzielimy przez 0" );


    }
    else
    {
        printf("bledny typ operatora");
    }

    return 0;
}
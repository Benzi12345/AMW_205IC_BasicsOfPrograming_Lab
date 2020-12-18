#include <stdio.h>

int main() {

    printf("Prosty kalkulator,wpisz pierw 2 liczby a potem znak dzialania (+,-,* lub / \n" );
    float a,b,wynik;
    char znak;
    scanf("%f",&a);
    scanf("%f",&b);

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
    else if(znak == '/')
    {
        wynik=a/b;
        printf("Wynik dzielenia wynosi %f",wynik );


    }
    else
    {
        printf("Bledny typ operatora" );


    }



    return 0;
}
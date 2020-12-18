#include <stdio.h>

int main() {

    float liczba1,liczba2,wynik;
    char znak;

    printf("Kalkulator");
    printf("\n Podaj operator: (+,-,/,*): \n");
    scanf("%c",&znak);
    printf("\n Podaj pierwsza liczbe : ");
    scanf("%f",&liczba1);
    printf("\n Podaj druga liczbe : ");
    scanf("%f",&liczba2);

    printf("Wprowadzono liczby: %f,%f",liczba1,liczba2);

    if(znak== '+' ){
        wynik=liczba1+liczba2;
        printf("\n Wynik dodawania liczb %lf + %lf wynosi: %lf",liczba1,liczba2,wynik);
    }
    else if(znak== '-' ){
        wynik=liczba1-liczba2;
        printf("\n Wynik odejmowania liczb %lf - %lf wynosi: %lf",liczba1,liczba2,wynik);
    }
    else if(znak== '*' ){
        wynik=liczba1*liczba2;
        printf("\n Wynik mnozenia liczb %lf * %lf wynosi: %lf",liczba1,liczba2,wynik);
    }
    else if(znak== '/' ){
        wynik=liczba1/liczba2;
        printf("\n Wynik dzielenia liczb %lf / %lf wynosi: %lf",liczba1,liczba2,wynik);
    }
    else{
        printf("\n Wystapil blad podczas wprowadzania danych.");
    }
}
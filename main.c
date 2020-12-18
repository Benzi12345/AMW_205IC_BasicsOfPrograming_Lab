#include <stdio.h>

int main() {

    int liczba1,liczba2,suma,roznica,iloraz,iloczyn;
    char znak;

    printf("Kalkulator");
    printf("\nPodaj operator: (+,-,/,*): \n");
    scanf("%c",&znak);
    printf("\n Podaj pierwsza liczbe : ");
    scanf("%i",&liczba1);
    printf("\n Podaj druga liczbe : ");
    scanf("%i",&liczba2);

    printf("Wprowadzono liczby: %i,%i",liczba1,liczba2);

    if(znak== '+' ){
        suma=liczba1+liczba2;
        printf("\n Wynik dodawania liczb %i + %i wynosi: %i",liczba1,liczba2,suma);
    }
    else if(znak== '-' ){
        roznica=liczba1-liczba2;
        printf("\n Wynik odejmowania liczb %i - %i wynosi: %i",liczba1,liczba2,roznica);
    }
    else if(znak== '*' ){
        iloczyn=liczba1*liczba2;
        printf("\n Wynik mnozenia liczb %i * %i wynosi: %i",liczba1,liczba2,iloczyn);
    }
    else if(znak== '/' ){
        iloraz=liczba1/liczba2;
        printf("\n Wynik dzielenia liczb %i / %i wynosi: %i",liczba1,liczba2,iloraz);
    }
    else{
        printf("\n Wystapil blad podczas wprowadzania danych.");
    }
}
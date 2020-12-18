#include <stdio.h>

int main() {

    int l1,l2,suma,roznica,iloraz,iloczyn;
    char znak;

    printf("Kalkulator");
    printf("\nPodaj operator: (+,-,/,*): ");
    scanf("%c",&znak);
    printf("\n Podaj pierwsza liczbe : ");
    scanf("%i",&l1);
    printf("\n Podaj druga liczbe : ");
    scanf("%i",&l2);

    printf("Wprowadzono liczby: %i,%i",l1,l2);

    if(znak== '+' ){
        suma=l1+l2;
        printf("\n Wynik dodawania  %i + %i wynosi: %i",l1,l2,suma);
    }
    else if(znak== '-' ){
        roznica=l1-l2;
        printf("\n Wynik odejmowania %i - %i wynosi: %i",l1,l2,roznica);
    }
    else if(znak== '*' ){
        iloczyn=l1*l2;
        printf("\n Wynik mnozenia  %i * %i wynosi: %i",l1,l2,iloczyn);
    }
    else if(znak== '/' ){
        iloraz=l1/l2;
        printf("\n Wynik dzielenia  %i / %i wynosi: %i",l1,l2,iloraz);
    }
    else{
        printf("\n Wystapil blad.");
    }
}
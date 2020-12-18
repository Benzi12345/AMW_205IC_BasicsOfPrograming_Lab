#include <stdio.h>

int main()
{
    double liczba1, liczba2, wynik;
    char znak;

    printf("Kalkulator");
    printf("\nProsze podaj pierwsza liczbe: ");
    scanf("%lf", &liczba1);

    printf("Prosze podaj druga liczbe: ");
    scanf("%lf", &liczba2);

    printf("\nProsze podaj operacje +, -, *, /: ");
    scanf("%s", &znak);

    switch(znak)
    {
        case '+': wynik = liczba1 + liczba2; break;
        case '-': wynik = liczba1 - liczba2; break;
        case '*': wynik = liczba1 * liczba2; break;
        case '/': wynik = liczba1 / liczba2; break;
    }

    printf("Wynik: %lf", wynik);

    return 0;
}
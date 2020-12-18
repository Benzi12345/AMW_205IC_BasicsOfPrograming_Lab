#include <stdio.h>

int main() {

    int liczba_a, liczba_b;
    char oper; //"Znak Operacji"
    int wynik;
    printf("Wpisz pierwsza liczbe:");
    scanf(" %i", &liczba_a);
    printf("Wpisz druga liczbe:");
    scanf(" %i", &liczba_b);
    printf("Wpisz znak operacji:");
    scanf(" %c", &oper);
    switch(oper)
    {
        case '+':
            wynik = liczba_a+liczba_b;
            break;

        case '-':
            wynik = liczba_a-liczba_b;
            break;
        case '*':
            wynik = liczba_a*liczba_b;
            break;
        case '/':
            if(liczba_b == 0)
            {
                printf("Nie mozna podzielic przez 0!");
                return 0;
            }
            wynik = liczba_a/liczba_b;
            break;

        default:
            printf("Podany znak jest nieprawidlowy!");
            return 0;

    };
    printf("Wynik dzialania wynosi %i\n", wynik);
    return 0;
}

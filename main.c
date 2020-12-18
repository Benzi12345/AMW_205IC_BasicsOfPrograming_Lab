#include <stdio.h>

int main() {
    int liczba1,liczba2;
    float wynik;
    char operacja;

    printf("Prosze podaj pierwsza liczbe:");
    scanf("%i",&liczba1);
    printf("Prosze podaj druga liczbe:");
    scanf("%i",&liczba2);
    printf("Prosze podaj operacje:");
    scanf(" %c",&operacja);
    switch (operacja)
    {
        case '+':
            wynik=liczba1+liczba2;
            break;

        case '-':
            wynik=liczba1-liczba2;
            break;

        case '*':
            wynik=liczba1*liczba2;
            break;

        case '/':
            if(liczba1 ==0 || liczba2 ==0 || liczba1 && liczba2 ==0)
            {
                printf("Nie mozna dzielic przez 0");
            }
            else
            {
                wynik = liczba1 / liczba2;
            }
            break;

        default:
            printf("Wybrana zla operacja");
    }
    printf("Wynik: %f",wynik);
    return 0;
}
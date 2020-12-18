#include <stdio.h>

int main() {
    int liczba1,liczba2;
    float wynik;
    char operacja;

    scanf("%i",&liczba1);
    scanf(" %c",&operacja);
    scanf("%i",&liczba2);
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

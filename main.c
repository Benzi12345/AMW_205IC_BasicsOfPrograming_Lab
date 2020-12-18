#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Wybierz\n");
    printf("1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n\n");
    scanf("%d", &choice);

    if(choice > 4)
    {
        printf("Zly wybor\n");
    }
    else
    {
        printf("Wpisz dwie liczby\n");
        scanf("%d %d", &a, &b);
    }


    if(choice == 1)
    {
        printf("Wnyik dodawania liczb %d i %d jest rowny %d\n", a, b, (a+b));
    }
    else if(choice == 2)
    {
        printf("Wynik odejmowania liczb %d i %d jest rowny %d\n", a, b, (a-b));
    }
    else if(choice == 3)
    {
        printf("Wynik mnozenia liczb %d i %d jest rowny %d\n", a, b, (a*b));
    }
    else if(choice == 4)
    {
        if(b != 0)
            printf("Wynik dzielenia liczb %d and %d jest rowny %d\n", a, b, (a/b));
        else
            printf("Nie mozna dzielic przez 0\n");
    }
    else
    {
        printf("\n""Wpisz dowolne z tych numerów 1, 2, 3, 4\n");
    }


    return 0;
}
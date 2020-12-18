#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Wybierz dzialanie:\n");
    printf("1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n\n");
    scanf("%d", &choice);

    if(choice > 4)
    {
        printf("Bledny wybor\n");
    }
    else
    {
        printf("Wybierz dwie liczby:\n");
        scanf("%d %d", &a, &b);
    }


    if(choice == 1)
    {
        printf("Wnyik dzialania %d + %d jest rowny %d\n", a, b, (a+b));
    }
    else if(choice == 2)
    {
        printf("Wynik dzialania %d - %d jest rowny %d\n", a, b, (a-b));
    }
    else if(choice == 3)
    {
        printf("Wynik dzialania %d * %d jest rowny %d\n", a, b, (a*b));
    }
    else if(choice == 4)
    {
        if(b != 0)
            printf("Wynik dzialania %d / %d jest rowny %d\n", a, b, (a/b));
        else
            printf("Nie mozna dzielic przez 0\n");
    }
    else
    {
        printf("\n""Wpisz dowolny numer od 1 do 4\n");
    }


    return 0;
}
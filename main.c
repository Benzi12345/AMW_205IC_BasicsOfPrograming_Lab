#include <stdio.h>

int main ()
{
    int a, b, i;
    char c;
    printf("Wpisz pierwsza liczbe: \n");       //Podaj pierwsza liczbę
    scanf("%d", &a);
    printf("Wpisz druga liczbe: \n");          //Podaj drugą liczbę
    scanf("%d", &b);
    getchar();
    printf("Podaj znak: \n");    //Podaj znak (+ , - , * lub /)
    scanf("%c", &c);

    switch (c)   // działanie
    {
        case   '+': i=a+b;                      // Dodawanie
            printf("Wynik to: %d\n", i);  // Wynik dodawania
            break;
        case   '-': i=a-b;                      // Odejmowanie
            printf("Wynik to: %d\n", i);  //Wynik odejmowania
            break;
        case   '*': i=a*b;                      // Mnożenie
            printf("Wynik to: %d\n", i);  // Wynik mnożenia
            break;
        case   '/': i=a/b;                      // Dzielenie
            printf("Wynik to: %d\n", i);  //Wynik dzielenia

            if (b==0)         //Warunek
            {
                printf ("Dzielenie przez zero jest niemozliwe"); //Komunikat
            }

            break;

    }
    return 0;
}

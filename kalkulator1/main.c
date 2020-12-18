#include <stdio.h>
int main ()
{
    int a, b, wynik;
    char c;     ///operacja
    printf("Prosze podaj pierwsza liczbe: \n");
    scanf("%d", &a);
    printf("Prosze podaj druga liczne: \n");
    scanf("%d", &b);
    getchar();
    printf("Prosze podaj operacje: \n");
    scanf("%c", &c);

    switch (c)   /// operacja
    {
        case   '+': wynik=a+b;
            printf("Wynik to: %d\n", wynik);
            break;
        case   '-': wynik=a-b;
            printf("Wynik to: %d\n", wynik);
            break;
        case   '*': wynik=a*b;
            printf("Wynik to: %d\n", wynik);
            break;
        case   '/': wynik=a/b;
            printf("Wynik to: %d\n", wynik);

            if (b==0)
            {
                printf ("Nie mozna dzielic przez zero ");
            }
            else
            {

                '/'; wynik=a/b;
                printf("Wynik to: %d\n", wynik);

            }

            break;

    }
    return 0;
}
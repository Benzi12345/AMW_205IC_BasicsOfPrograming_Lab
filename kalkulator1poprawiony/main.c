#include <stdio.h>
int main ()
{
    float a, b, wynik;
    char c;     ///operacja
    printf("Prosze podaj pierwsza liczbe: \n");
    scanf("%f", &a);
    printf("Prosze podaj druga liczne: \n");
    scanf("%f", &b);
    getchar();
    printf("Prosze podaj operacje: \n");
    scanf("%c", &c);

    switch (c)   /// operacja
    {
        case   '+': wynik=a+b;
            printf("Wynik to: %f\n", wynik);
            break;
        case   '-': wynik=a-b;
            printf("Wynik to: %f\n", wynik);
            break;
        case   '*': wynik=a*b;
            printf("Wynik to: %f\n", wynik);
            break;
        case   '/': wynik=a/b;
            printf("Wynik to: %f\n", wynik);

            if (b==0)
            {
                printf ("Nie mozna dzielic przez zero ");
            }
            else
            {

                '/'; wynik=a/b;
                printf("Wynik to: %f\n", wynik);

            }

            break;

    }
    return 0;
}